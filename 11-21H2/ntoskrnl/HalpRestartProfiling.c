/*
 * XREFs of HalpRestartProfiling @ 0x140391464
 * Callers:
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A62458 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpRestartProfiling()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 **v2; // r11
  __int64 *i; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax

  v0 = HalpProfileInterface[7]();
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = (__int64 **)(HalpCounterSetInfo + 24 * v0);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v5 = 0LL;
    if ( *((_DWORD *)i + 5) )
    {
      while ( 1 )
      {
        v6 = 5 * v5;
        v1 = HIDWORD(i[5 * v5 + 5]);
        if ( !(_DWORD)v1 )
          break;
        v1 = (unsigned int)(v1 - 1);
        if ( (_DWORD)v1 )
        {
          if ( (_DWORD)v1 != 1 )
            break;
          v1 = LODWORD(i[5 * v5 + 6]);
          v7 = __readmsr(v1);
          LODWORD(v8) = HIDWORD(v7);
          v7 = (unsigned int)v7;
          v8 = (unsigned int)v8;
        }
        else
        {
          v1 = LODWORD(i[5 * v5 + 6]);
          v7 = __readpmc(v1);
          LODWORD(v8) = HIDWORD(v7);
          v7 = (unsigned int)v7;
          v8 = (unsigned int)v8;
        }
        v9 = (v8 << 32) | v7;
LABEL_12:
        v5 = (unsigned int)(v5 + 1);
        i[v6 + 3] = v9;
        if ( (unsigned int)v5 >= *((_DWORD *)i + 5) )
          goto LABEL_13;
      }
      v9 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    ;
  }
  LOBYTE(v1) = 1;
  return ((__int64 (__fastcall *)(__int64))off_140C01FF8[0])(v1);
}
