/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C02A0C30
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C02A08BC (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C02A07F0 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, struct PFF *a2)
{
  struct PFF *i; // rcx
  __int64 v5; // rbx
  __int64 j; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  struct PFF *result; // rax
  struct PFF *v10; // rdi
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  SGDGetSessionState(a1);
  for ( i = a2; ; i = (struct PFF *)*((_QWORD *)v10 + 1) )
  {
    result = SkipInvalidPff(i);
    v10 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      if ( v5 )
      {
        v11 = 0LL;
        do
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v5 + 840); j = (unsigned int)(j + 1) )
          {
            v7 = (__int64 *)(*(_QWORD *)(v5 + 744) + 8 * j);
            if ( *v7 )
            {
              v8 = *(_QWORD *)(*v7 + 120);
              if ( v8 == *a1 || v8 == a1[1] )
                vMakeInactiveHelper(v7);
            }
          }
          *(_DWORD *)(v5 + 712) = 0;
          v5 = *(_QWORD *)(v5 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
        }
        while ( v5 );
      }
    }
  }
  return result;
}
