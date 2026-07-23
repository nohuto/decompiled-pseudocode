/*
 * XREFs of sub_1403A22F0 @ 0x1403A22F0
 * Callers:
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

char __fastcall sub_1403A22F0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]

  v5 = (1 << a2) & 0xA;
  if ( v5 )
  {
    if ( byte_140D0688A )
    {
      v6 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( !*(_BYTE *)(v6 + 912) )
      {
        if ( (byte_140D0688A & 2) != 0 )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          _EAX = 0;
          __asm { invpcid eax, [rsp+68h+var_48] }
        }
        else
        {
          sub_140420AD0(v6, a2, a3, a4);
        }
      }
    }
  }
  __invlpg((void *)a1);
  LOBYTE(_RAX) = 8 * ((a1 >> 10) & 3);
  v8 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v9 = a1 & 0x3FF;
  if ( (a1 & 0x3FF) != 0 )
  {
    do
    {
      a1 += v8;
      if ( v5 )
      {
        if ( byte_140D0688A )
        {
          _RAX = KeGetCurrentThread();
          v10 = *((_QWORD *)_RAX + 23);
          if ( !*(_BYTE *)(v10 + 912) )
          {
            if ( (byte_140D0688A & 2) != 0 )
            {
              *(_QWORD *)&v14 = 1LL;
              *((_QWORD *)&v14 + 1) = a1;
              LODWORD(_RAX) = 0;
              __asm { invpcid eax, [rsp+68h+var_38] }
            }
            else
            {
              LOBYTE(_RAX) = sub_140420AD0(v10, a2, a3, a4);
            }
          }
        }
      }
      __invlpg((void *)a1);
      --v9;
    }
    while ( v9 );
  }
  return (char)_RAX;
}
