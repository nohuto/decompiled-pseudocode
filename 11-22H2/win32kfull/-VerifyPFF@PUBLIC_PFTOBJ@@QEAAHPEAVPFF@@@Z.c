/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C026ADB8
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C0277E60 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1C026AF1C (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(PUBLIC_PFTOBJ *this, struct PFF *a2)
{
  __int64 result; // rax
  Gre::Base *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rsi
  unsigned int v8; // ebx
  struct PFF **v9; // rcx
  struct PFF *i; // rcx
  struct PFF *v11; // rax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  result = PFTOBJ::bIsPrivatePFT(this);
  if ( (_DWORD)result )
  {
    v12 = *((_QWORD *)Gre::Base::Globals(v5) + 6);
    GreAcquireSemaphore(v12);
    v6 = 0;
    v7 = 40LL;
    v8 = 1;
    do
    {
      v9 = (struct PFF **)(v7 + *(_QWORD *)this);
      if ( v9 )
      {
        for ( i = *v9; ; i = (struct PFF *)*((_QWORD *)v11 + 1) )
        {
          v11 = SkipInvalidPff(i);
          if ( !v11 )
            break;
          if ( a2 == v11 )
            goto LABEL_10;
        }
      }
      ++v6;
      v7 += 8LL;
    }
    while ( v6 < 0x14 );
    v8 = 0;
LABEL_10:
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v12);
    return v8;
  }
  return result;
}
