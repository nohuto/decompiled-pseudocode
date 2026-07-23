/*
 * XREFs of KeWriteProtectPAT @ 0x140A69D80
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 */

void __fastcall KeWriteProtectPAT(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-18h] BYREF

  if ( !byte_140D06888 )
  {
    v2 = 8LL;
    v7 = __readmsr(0x277u);
    v3 = &v7;
    if ( a1 )
    {
      do
      {
        if ( *(_BYTE *)v3 == 6 )
          *(_BYTE *)v3 = 5;
        v3 = (unsigned __int64 *)((char *)v3 + 1);
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        if ( *(_BYTE *)v3 == 5 )
          *(_BYTE *)v3 = 6;
        v3 = (unsigned __int64 *)((char *)v3 + 1);
        --v2;
      }
      while ( v2 );
    }
    __writemsr(0x277u, v7);
    if ( byte_140D0688A )
    {
      v4 = __readcr3();
      __writecr3(v4);
      if ( !*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) )
        sub_140420AD0();
    }
    else
    {
      v5 = __readcr4();
      if ( (v5 & 0x20080) != 0 )
      {
        __writecr4(v5 ^ 0x80);
        __writecr4(v5);
      }
      else
      {
        v6 = __readcr3();
        __writecr3(v6);
      }
    }
  }
}
