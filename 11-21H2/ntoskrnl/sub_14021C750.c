/*
 * XREFs of sub_14021C750 @ 0x14021C750
 * Callers:
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

char __fastcall sub_14021C750(__int64 a1)
{
  void **v1; // r14
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  int v5; // esi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-48h]

  v1 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
  {
    v4 = (unsigned __int64)*v1;
    v5 = (1 << *(_DWORD *)(a1 + 12)) & 0xA;
    if ( v5 && byte_140D0688A && !*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) )
    {
      if ( (byte_140D0688A & 2) != 0 )
      {
        *(_QWORD *)&v11 = 1LL;
        *((_QWORD *)&v11 + 1) = *v1;
        _EAX = 0;
        __asm { invpcid eax, [rsp+78h+var_58] }
      }
      else
      {
        sub_140420AD0();
      }
    }
    __invlpg((void *)v4);
    LOBYTE(_RAX) = 8 * ((v4 >> 10) & 3);
    v8 = 4096LL << (9 * ((unsigned __int8)(v4 >> 10) & 3u));
    v9 = v4 & 0x3FF;
    if ( (v4 & 0x3FF) != 0 )
    {
      do
      {
        v4 += v8;
        if ( v5 )
        {
          if ( byte_140D0688A )
          {
            _RAX = KeGetCurrentThread();
            if ( !*(_BYTE *)(*((_QWORD *)_RAX + 23) + 912LL) )
            {
              if ( (byte_140D0688A & 2) != 0 )
              {
                *(_QWORD *)&v12 = 1LL;
                *((_QWORD *)&v12 + 1) = v4;
                LODWORD(_RAX) = 0;
                __asm { invpcid eax, [rsp+78h+var_48] }
              }
              else
              {
                LOBYTE(_RAX) = sub_140420AD0();
              }
            }
          }
        }
        __invlpg((void *)v4);
        --v9;
      }
      while ( v9 );
    }
    ++v1;
  }
  while ( (unsigned __int64)v1 < v3 );
  return (char)_RAX;
}
