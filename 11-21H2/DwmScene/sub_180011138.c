/*
 * XREFs of sub_180011138 @ 0x180011138
 * Callers:
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_1800112F0 @ 0x1800112F0 (sub_1800112F0.c)
 *     sub_1800277C0 @ 0x1800277C0 (sub_1800277C0.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_18002D7E4 @ 0x18002D7E4 (sub_18002D7E4.c)
 *     sub_180031324 @ 0x180031324 (sub_180031324.c)
 *     sub_180031904 @ 0x180031904 (sub_180031904.c)
 *     sub_180032E78 @ 0x180032E78 (sub_180032E78.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 *     sub_180038F28 @ 0x180038F28 (sub_180038F28.c)
 *     sub_18003914C @ 0x18003914C (sub_18003914C.c)
 *     sub_180044E0C @ 0x180044E0C (sub_180044E0C.c)
 *     sub_18005E94C @ 0x18005E94C (sub_18005E94C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011138(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
