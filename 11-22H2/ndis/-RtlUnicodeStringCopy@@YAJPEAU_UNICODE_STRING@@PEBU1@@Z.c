/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028B3C
 * Callers:
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x1C002DC94 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C0118214 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C0118600 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C011866C (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x1C0028C18 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  unsigned int v9; // r11d
  _WORD *v10; // r14
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r10
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx

  v5 = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_WORD **)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker_0(a2, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && a2 )
  {
    Buffer = a2->Buffer;
    v15 = (unsigned __int64)a2->Length >> 1;
LABEL_7:
    v9 = v13;
    v16 = v13;
    if ( v11 )
    {
      while ( v15 )
      {
        --v15;
        *v10++ = *Buffer++;
        ++v16;
        if ( !--v11 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( v15 )
        v9 = -2147483643;
    }
    LOWORD(v13) = v16;
    goto LABEL_12;
  }
  Buffer = (wchar_t *)v13;
  v15 = v13;
  if ( v12 >= 0 )
    goto LABEL_7;
LABEL_12:
  a1->Length = 2 * v13;
  return v9;
}
