/*
 * XREFs of AslStringReplace @ 0x180099054
 * Callers:
 *     AslStringReplaceArray @ 0x18009927C (AslStringReplaceArray.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     RtlStringCchLengthW @ 0x18008FCD8 (RtlStringCchLengthW.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 */

__int64 __fastcall AslStringReplace(unsigned __int16 **a1, wchar_t *a2, wchar_t *a3, _WORD *a4)
{
  wchar_t *v6; // rdi
  __int64 result; // rax
  unsigned int v9; // r11d
  unsigned int v10; // r11d
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  wchar_t *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v17; // r14
  char *v18; // r15
  wchar_t *v19; // r12
  size_t v20; // r14
  char *v21; // r15
  unsigned __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v23; // [rsp+28h] [rbp-50h]
  wchar_t *v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  v24 = a2;
  v6 = a2;
  if ( !a2 )
    return 0LL;
  if ( a3 && a4 )
  {
    result = RtlStringCchLengthW(a2, 0x7FFFLL, &v26);
    if ( (int)result < 0 )
      return result;
    if ( (int)RtlStringCchLengthW(a3, v9, &v22) >= 0 )
    {
      v11 = v22;
      if ( v22 )
      {
        if ( v22 <= v26 && (int)RtlStringCchLengthW(a4, v10, &v22) >= 0 )
        {
          v12 = v22;
          if ( v22 )
          {
            v13 = 0LL;
            v14 = wcsstr(v6, a3);
            if ( v14 )
            {
              do
              {
                ++v13;
                v14 = wcsstr(&v14[v11], a3);
              }
              while ( v14 );
              if ( v13 )
              {
                v15 = v26 + v13 * (v12 - v11);
                if ( v15 )
                {
                  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v15 + 2);
                  v23 = Heap;
                  v17 = Heap;
                  if ( !Heap )
                    return 3221225495LL;
                  v18 = (char *)Heap;
                  v19 = wcsstr(v6, a3);
                  if ( v19 )
                  {
                    v20 = 2 * v22;
                    do
                    {
                      memcpy_0(v18, v6, 2 * (v19 - v6));
                      v21 = &v18[2 * (v19 - v6)];
                      memcpy_0(v21, a4, v20);
                      v6 = &v19[v11];
                      v18 = &v21[v20];
                      v19 = wcsstr(v6, a3);
                    }
                    while ( v19 );
                    v17 = v23;
                  }
                  memcpy_0(v18, v6, 2 * (v26 - (v6 - v24)));
                  *a1 = v17;
                  return 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return AslStringDuplicate(a1, v6);
}
