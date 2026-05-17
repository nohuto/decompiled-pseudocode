/*
 * XREFs of RtlDosSearchPath_U @ 0x180078A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDoesFileExists_UEx @ 0x18000973C (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_UEx @ 0x1800195A0 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlDetermineDosPathNameType_U @ 0x180078C60 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int64 a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  _WORD *v11; // rcx
  unsigned int v12; // ebx
  __int16 v14; // ax
  unsigned int v15; // r15d
  int v16; // ebp
  unsigned int v17; // esi
  __int64 Heap; // rbp
  size_t v19; // r13
  __int16 v20; // ax
  _WORD *v21; // rsi
  int FullPathName_UEx; // eax
  struct _PEB *v23; // rcx
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  _WORD v25[12]; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v11 = a2;
  if ( v10 == 5 )
  {
    v14 = *a2;
    v12 = 0;
    while ( v14 )
    {
      if ( v14 == 46 )
        goto LABEL_10;
      v14 = *++v11;
    }
    if ( !a3 )
    {
LABEL_10:
      v15 = 0;
      goto LABEL_11;
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v25, (__int64)a3) < 0 )
      return 0LL;
    v15 = v25[0];
LABEL_11:
    if ( (int)RtlInitUnicodeStringEx((__int64)v25, a1) >= 0 )
    {
      v16 = v25[0];
      if ( (int)RtlInitUnicodeStringEx((__int64)v25, (__int64)a2) >= 0 )
      {
        v17 = v25[0];
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16 + v25[0] + v15 + 6LL);
        if ( Heap )
        {
          v19 = v17;
          while ( 1 )
          {
            v20 = *(_WORD *)a1;
            v21 = (_WORD *)Heap;
            if ( *(_WORD *)a1 )
            {
              do
              {
                a1 += 2LL;
                if ( v20 == 59 )
                  break;
                *v21++ = v20;
                v20 = *(_WORD *)a1;
              }
              while ( *(_WORD *)a1 );
              if ( v21 != (_WORD *)Heap && *(v21 - 1) != 92 )
                *v21++ = 92;
            }
            a1 &= -(__int64)(*(_WORD *)a1 != 0);
            memmove(v21, a2, v19);
            if ( v15 )
              memmove((char *)v21 + v19, a3, v15 + 2LL);
            else
              *(_WORD *)((char *)v21 + v19) = 0;
            if ( RtlDoesFileExists_UEx(Heap, 0) )
              break;
            if ( !a1 )
            {
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
              return 0LL;
            }
          }
          FullPathName_UEx = RtlGetFullPathName_UEx(Heap, a4, a5, a6, &v24);
          v23 = NtCurrentPeb();
          if ( FullPathName_UEx >= 0 )
            v12 = v24;
          RtlFreeHeap((__int64)v23->ProcessHeap, 0, Heap);
          return v12;
        }
      }
    }
  }
  else
  {
    v12 = 0;
    if ( RtlDoesFileExists_UEx((__int64)a2, 1) )
    {
      if ( (int)RtlGetFullPathName_UEx((__int64)a2, a4, a5, a6, &v24) >= 0 )
        return v24;
      return v12;
    }
  }
  return 0LL;
}
