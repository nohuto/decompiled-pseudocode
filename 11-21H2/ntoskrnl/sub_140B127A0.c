/*
 * XREFs of sub_140B127A0 @ 0x140B127A0
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14055F2A0 @ 0x14055F2A0 (sub_14055F2A0.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 */

__int64 __fastcall sub_140B127A0(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  void **v5; // r10
  unsigned int i; // edx
  char *j; // rcx
  __int64 v10; // rbx
  char *v11; // rcx
  char *v12; // rdi
  int v13; // eax
  PVOID v14; // rsi
  int v15; // ebx
  unsigned int v17; // [rsp+38h] [rbp-40h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  v5 = (void **)qword_140C46B50;
  String2 = 0LL;
  if ( !qword_140C46B50 || a3 >= dword_140C46B40 )
    return 3221225473LL;
  for ( i = 0; i < a3; v5 += 2 )
  {
    for ( j = (char *)*v5; j != (char *)qword_140C46B50 + 16 * i; j = *(char **)j )
    {
      if ( !j[47] )
        return 3221225473LL;
    }
    ++i;
  }
  _mm_lfence();
  v10 = 16LL * a3;
  v11 = (char *)qword_140C46B50 + v10;
  v12 = *(char **)((char *)qword_140C46B50 + v10);
  while ( v12 != v11 )
  {
    if ( (int)sub_14067B694(*((HANDLE *)v12 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v12[47] )
        {
          v15 = *((_DWORD *)v12 + 10);
          if ( v15 >= 0 )
            v15 = -1073741823;
        }
        else
        {
          v13 = sub_140B11D58(
                  &String2.Length,
                  (__int128 *)(*((_QWORD *)v12 + 3) + 32LL),
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL) + 56LL),
                  *(_QWORD *)(*((_QWORD *)v12 + 3) + 48LL),
                  qword_140D068D0 + 16,
                  1,
                  1,
                  v17,
                  (__int64)&Object);
          v14 = Object;
          v15 = v13;
          *((_DWORD *)v12 + 10) = v13;
          *((_QWORD *)v12 + 2) = v14;
          v12[47] = 1;
          if ( v14 )
          {
            ObfReferenceObjectWithTag(v14, 0x746C6644u);
            *a4 = v14;
          }
          else
          {
            v12[46] = 1;
          }
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)v15;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v12 = *(char **)v12;
    v11 = (char *)qword_140C46B50 + v10;
  }
  v15 = -1073741823;
  if ( (unsigned int)sub_14055F2A0(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)v15;
}
