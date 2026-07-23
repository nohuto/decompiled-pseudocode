/*
 * XREFs of sub_1402D7740 @ 0x1402D7740
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 * Callees:
 *     sub_1402D75FC @ 0x1402D75FC (sub_1402D75FC.c)
 *     sub_1402D77C0 @ 0x1402D77C0 (sub_1402D77C0.c)
 */

__int64 __fastcall sub_1402D7740(void *a1, _QWORD *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // r8
  _DWORD *v5; // rbx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v3 = sub_1402D75FC(a1, (__int64)a2, 1, 1);
  v5 = v3;
  if ( v3 )
  {
    if ( (int)sub_1402D77C0(v3, *a2, v4, &v8) < 0 )
    {
      return 393216;
    }
    else
    {
      v6 = v8;
      if ( (v5[5] & 0x100) != 0 )
        v6 = v8 | 0x100000;
      if ( (v5[4] & 0x10) != 0 )
        v6 |= 0x200000u;
    }
  }
  else
  {
    return 0x80000;
  }
  return v6;
}
