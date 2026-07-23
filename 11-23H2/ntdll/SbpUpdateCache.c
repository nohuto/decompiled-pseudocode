/*
 * XREFs of SbpUpdateCache @ 0x180070CEC
 * Callers:
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 * Callees:
 *     SbpFindMatchingContext @ 0x180070E58 (SbpFindMatchingContext.c)
 *     SbAtomicCaptureContextGuid @ 0x180070E98 (SbAtomicCaptureContextGuid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     SbpResolveBasedOnName @ 0x1801286BC (SbpResolveBasedOnName.c)
 */

__int64 __fastcall SbpUpdateCache(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  _DWORD *v7; // rax
  __int64 i; // rbp
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // edi
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r15
  unsigned int v16; // r10d
  unsigned int v17; // edx
  __int64 result; // rax
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+38h] [rbp-50h] BYREF

  v4 = a3;
  if ( !(unsigned int)SbAtomicCaptureContextGuid(a4, v28, &v27) )
    return 0LL;
  v7 = *(_DWORD **)(a2 + 24);
  for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)&v7[2 * i + 2];
    if ( v9 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v9 + 68) )
      {
        while ( 1 )
        {
          v11 = 0;
          if ( *(_DWORD *)(v4 + 60) )
            break;
LABEL_6:
          if ( ++v10 >= *(_DWORD *)(v9 + 68) )
            goto LABEL_7;
        }
        v22 = (unsigned __int64)v10 << 7;
        while ( 1 )
        {
          v23 = 16 * (v11 + 4LL);
          v24 = *(_QWORD *)(v22 + v9 + 184) - *(_QWORD *)(v23 + v4);
          if ( !v24 )
            v24 = *(_QWORD *)(v22 + v9 + 192) - *(_QWORD *)(v23 + v4 + 8);
          if ( !v24 )
            break;
          if ( ++v11 >= *(_DWORD *)(v4 + 60) )
            goto LABEL_6;
        }
        if ( !*(_QWORD *)(v22 + v9 + 80) && *(_DWORD *)(v22 + v9 + 88) == 2 )
          *(_QWORD *)(v22 + v9 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v22 + v9 + 72));
        *(_QWORD *)(a1 + 8 * i + 16) = v22 + v9 + 72;
      }
LABEL_7:
      v12 = *(_DWORD *)(v9 + 68);
      if ( v10 >= v12 )
      {
        v13 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            v14 = (unsigned __int64)v13 << 7;
            v15 = (_QWORD *)(v14 + v9 + 72);
            if ( (unsigned int)SbpFindMatchingContext(v28, v15) == 1 )
              break;
            if ( ++v13 >= v16 )
              goto LABEL_14;
          }
          if ( !*(_QWORD *)(v14 + v9 + 80) && *(_DWORD *)(v14 + v9 + 88) == 2 )
            *(_QWORD *)(v14 + v9 + 80) = SbpResolveBasedOnName(*v15);
          *(_QWORD *)(a1 + 8 * i + 16) = v15;
LABEL_14:
          v4 = a3;
        }
        v17 = *(_DWORD *)(v9 + 68);
        if ( v13 >= v17 )
        {
          v19 = 0;
          if ( v17 )
          {
            v20 = (_DWORD *)(v9 + 104);
            while ( !*v20 )
            {
              ++v19;
              v20 += 32;
              if ( v19 >= v17 )
                goto LABEL_16;
            }
            v21 = (unsigned __int64)v19 << 7;
            if ( !*(_QWORD *)(v21 + v9 + 80) && *(_DWORD *)(v21 + v9 + 88) == 2 )
              *(_QWORD *)(v21 + v9 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v21 + v9 + 72));
            *(_QWORD *)(a1 + 8 * i + 16) = v21 + v9 + 72;
          }
        }
      }
    }
LABEL_16:
    v7 = *(_DWORD **)(a2 + 24);
  }
  result = 1LL;
  *(_QWORD *)a1 = v27;
  *(_DWORD *)(a1 + 8) = a4;
  return result;
}
