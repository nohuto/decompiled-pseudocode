/*
 * XREFs of sub_140578AD8 @ 0x140578AD8
 * Callers:
 *     sub_140579004 @ 0x140579004 (sub_140579004.c)
 * Callees:
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140547EA8 @ 0x140547EA8 (sub_140547EA8.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

__int64 __fastcall sub_140578AD8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // di
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+2Ch] [rbp-1Ch]

  result = (unsigned int)dword_140D0195C;
  v3 = a2;
  v4 = (unsigned __int8)a1;
  if ( dword_140D0195C && dword_140D0195C < 3 )
  {
    if ( dword_140D0195C == 2 )
    {
      LOBYTE(a1) = 1;
      sub_140547EA8(a1, a2);
      v12 = 0LL;
      v10 = 1LL;
      v11 = 99;
      sub_140579B48(&v10);
    }
    sub_1402DA5B0(1);
    sub_14042A5E0(v6, v5);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= result;
          if ( v9 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( v3 )
      _enable();
  }
  return result;
}
