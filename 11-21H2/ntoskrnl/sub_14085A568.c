/*
 * XREFs of sub_14085A568 @ 0x14085A568
 * Callers:
 *     sub_1406EA120 @ 0x1406EA120 (sub_1406EA120.c)
 * Callees:
 *     sub_14020B1F8 @ 0x14020B1F8 (sub_14020B1F8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14085A678 @ 0x14085A678 (sub_14085A678.c)
 *     sub_14085A75C @ 0x14085A75C (sub_14085A75C.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14085A568(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  int v8; // esi
  __int64 **v9; // rax
  _QWORD *v10; // r14
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]

  v15 = 0LL;
  v3 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( _InterlockedExchange(&dword_140C49870, 1) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( (unsigned __int8)sub_140AB46D0(a1, a2, a3) )
  {
    v7 = 0;
    v8 = 0;
    if ( off_140D3B708 )
    {
      v9 = &off_140D3B708;
      do
      {
        v10 = v9 + 1;
        if ( (int)sub_14085A75C(
                    v5,
                    *v9,
                    v6,
                    v9 + 1,
                    v15,
                    *((_QWORD *)&v15 + 1),
                    v16,
                    *((_QWORD *)&v16 + 1),
                    v17,
                    *((_QWORD *)&v17 + 1)) >= 0
          && (int)sub_14085A678(*v10) >= 0 )
        {
          ++v7;
        }
        v9 = &(&off_140D3B708)[2 * (unsigned int)++v8];
      }
      while ( *v9 );
      if ( v7 )
      {
        sub_140AB4550(&v15);
        for ( i = 0LL; ; i = v13 )
        {
          v12 = sub_14071B350(i);
          v13 = (struct _EX_RUNDOWN_REF *)v12;
          if ( !v12 )
            break;
          sub_14020B1F8((__int64)v12);
        }
        sub_140AB4580(&v15);
      }
    }
    sub_140AB42A0(v5, v4);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v3;
}
