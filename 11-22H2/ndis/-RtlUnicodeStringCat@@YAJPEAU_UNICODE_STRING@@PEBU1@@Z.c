/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028838
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C0118600 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0028924 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // r11
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  _WORD *v16; // r9
  __int16 v17; // dx
  __int64 v18; // rdi

  v5 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_QWORD *)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker(a2, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && a2 )
  {
    Buffer = a2->Buffer;
    v15 = (unsigned __int64)a2->Length >> 1;
  }
  else
  {
    Buffer = 0LL;
    v15 = 0LL;
    if ( v12 < 0 )
      return v9;
  }
  v16 = (_WORD *)(v10 + 2 * v13);
  v17 = 0;
  v9 = 0;
  v18 = v11 - v13;
  if ( v18 )
  {
    while ( v15 )
    {
      --v15;
      *v16++ = *Buffer++;
      ++v17;
      if ( !--v18 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    if ( v15 )
      v9 = -2147483643;
  }
  a1->Length = 2 * (v17 + v13);
  return v9;
}
