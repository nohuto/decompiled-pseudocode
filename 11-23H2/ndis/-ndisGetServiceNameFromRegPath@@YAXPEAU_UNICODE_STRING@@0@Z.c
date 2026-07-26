/*
 * XREFs of ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0032FF8
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002ACD4 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0153954 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetServiceNameFromRegPath(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  char v3; // r11
  wchar_t *Buffer; // rbx
  unsigned __int16 v5; // r10
  unsigned __int16 Length; // cx
  unsigned __int16 v7; // r9
  wchar_t *v8; // rcx
  unsigned __int16 v9; // cx

  if ( a2 && a1 && a1->Buffer )
  {
    a2->Buffer = 0LL;
    *(_DWORD *)&a2->Length = 0;
    v3 = 1;
    Buffer = a1->Buffer;
    v5 = 0;
    Length = a1->Length;
    v7 = 0;
    if ( (Length & 0xFFFE) != 0 )
    {
      do
      {
        v8 = &Buffer[v7];
        if ( *v8 == 92 )
        {
          v3 = 1;
        }
        else if ( v3 )
        {
          a2->Buffer = v8;
          v5 = v7;
          v3 = 0;
        }
        Length = a1->Length;
        ++v7;
      }
      while ( v7 < (unsigned __int16)(a1->Length >> 1) );
    }
    if ( a2->Buffer )
    {
      v9 = Length - 2 * v5;
      a2->MaximumLength = v9;
      a2->Length = v9;
    }
  }
}
