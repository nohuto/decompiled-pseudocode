/*
 * XREFs of RtlDosSearchPath_U @ 0x1800606F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x180043A20 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlDetermineDosPathNameType_U @ 0x180060670 (RtlDetermineDosPathNameType_U.c)
 *     RtlDoesFileExists_UEx @ 0x180063E54 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int16 *a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  __int64 v11; // rdx
  _WORD *v12; // rcx
  unsigned int v13; // ebx
  __int16 v15; // ax
  unsigned int v16; // r15d
  int v17; // ebp
  unsigned int v18; // edi
  __int64 Heap; // rbp
  size_t v20; // r13
  __int16 v21; // ax
  _WORD *v22; // rdi
  int FullPathName_UEx; // eax
  struct _PEB *v24; // rcx
  unsigned int v25; // [rsp+30h] [rbp-48h] BYREF
  _WORD v26[12]; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v12 = a2;
  if ( v10 == 5 )
  {
    v15 = *a2;
    v13 = 0;
    while ( v15 )
    {
      if ( v15 == 46 )
        goto LABEL_10;
      v15 = *++v12;
    }
    if ( !a3 )
    {
LABEL_10:
      v16 = 0;
      goto LABEL_11;
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v26, (__int64)a3) < 0 )
      return 0LL;
    v16 = v26[0];
LABEL_11:
    if ( (int)RtlInitUnicodeStringEx((__int64)v26, (__int64)a1) >= 0 )
    {
      v17 = v26[0];
      if ( (int)RtlInitUnicodeStringEx((__int64)v26, (__int64)a2) >= 0 )
      {
        v18 = v26[0];
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17 + v26[0] + v16 + 6LL);
        if ( Heap )
        {
          v20 = v18;
          while ( 1 )
          {
            v21 = *a1;
            v22 = (_WORD *)Heap;
            if ( !*a1 )
              goto LABEL_33;
            do
            {
              ++a1;
              if ( v21 == 59 )
                break;
              *v22++ = v21;
              v21 = *a1;
            }
            while ( *a1 );
            if ( v22 != (_WORD *)Heap && *(v22 - 1) != 92 )
              *v22++ = 92;
            if ( !*a1 )
LABEL_33:
              a1 = 0LL;
            memmove(v22, a2, v20);
            if ( v16 )
              memmove((char *)v22 + v20, a3, v16 + 2LL);
            else
              *(_WORD *)((char *)v22 + v20) = 0;
            if ( (unsigned __int8)RtlDoesFileExists_UEx(Heap, 0LL) )
              break;
            if ( !a1 )
            {
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
              return 0LL;
            }
          }
          FullPathName_UEx = RtlGetFullPathName_UEx(Heap, a4, a5, a6, &v25);
          v24 = NtCurrentPeb();
          if ( FullPathName_UEx >= 0 )
            v13 = v25;
          RtlFreeHeap((__int64)v24->ProcessHeap, 0, Heap);
          return v13;
        }
      }
    }
  }
  else
  {
    LOBYTE(v11) = 1;
    v13 = 0;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(a2, v11) )
    {
      if ( (int)RtlGetFullPathName_UEx((__int64)a2, a4, a5, a6, &v25) >= 0 )
        return v25;
      return v13;
    }
  }
  return 0LL;
}
