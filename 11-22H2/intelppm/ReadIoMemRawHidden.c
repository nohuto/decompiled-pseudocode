/*
 * XREFs of ReadIoMemRawHidden @ 0x1C0008A08
 * Callers:
 *     ReadGenAddrHidden @ 0x1C0008970 (ReadGenAddrHidden.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReadIoMemRawHidden(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  char v3; // r8
  __int64 v5; // r8
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = *(_QWORD *)(a2 + 4);
  v3 = *(_BYTE *)(a2 + 3);
  if ( *(_BYTE *)a2 == 1 )
  {
    switch ( v3 )
    {
      case 8:
        v5 = 1LL;
        break;
      case 16:
        v5 = 2LL;
        break;
      case 32:
        v5 = 4LL;
        break;
      default:
        return 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, __int64, __int64 *))qword_1C001F3E0)(a1, (unsigned __int16)v2, v5, &v6);
    return v6;
  }
  if ( *(_BYTE *)a2 != 127 || v3 != 64 )
    return 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64 *))qword_1C001F3D0)(a1, (unsigned int)v2, &v6);
  return v6;
}
