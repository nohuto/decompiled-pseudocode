/*
 * XREFs of sub_14050D91C @ 0x14050D91C
 * Callers:
 *     sub_14050D1D0 @ 0x14050D1D0 (sub_14050D1D0.c)
 *     sub_14050D380 @ 0x14050D380 (sub_14050D380.c)
 *     sub_14050D650 @ 0x14050D650 (sub_14050D650.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050C264 @ 0x14050C264 (sub_14050C264.c)
 *     sub_14050C47C @ 0x14050C47C (sub_14050C47C.c)
 *     sub_14052266C @ 0x14052266C (sub_14052266C.c)
 */

__int64 __fastcall sub_14050D91C(__int64 a1)
{
  int v1; // ebx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  int v14; // ecx
  LARGE_INTEGER v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)&qword_140C4C7A0 + 16LL);
  v2 = *(_QWORD *)(*(_QWORD *)&qword_140C4C7A0 + 32LL);
  if ( dword_140C4C780 != v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL) != 3 )
    {
      v3 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
      sub_14042A5E0(v3, v4);
      if ( (*(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 224LL) & 0x200000) == 0 )
      {
        v5 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
        sub_14042A5E0(v5, v6);
      }
    }
    if ( dword_140C4C780 != v1 )
    {
      v7 = sub_14050C264(a1, v1);
      if ( v7 < 0 )
        sub_14052266C(v8, 276, dword_140C4C780, v1, v7);
      dword_140C4C780 = v1;
    }
  }
  v9 = KeQueryInterruptTimePrecise(&v15);
  if ( v9 <= v2 )
    v11 = v2 - v9;
  else
    v11 = 0LL;
  v12 = 0x989680uLL / *(_QWORD *)(*(_QWORD *)&qword_140C4C7E0 + 192LL);
  if ( *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL) == 2 )
  {
    if ( v12 < 0x1312 )
      v12 = 4882LL;
  }
  else if ( v12 < 0x1388 )
  {
    v12 = 5000LL;
  }
  if ( v11 >= v12 )
    v12 = v11;
  result = sub_14050C47C(*(__int64 *)&qword_140C4C7E0, v12, v10, (unsigned __int64 *)&v15.QuadPart);
  if ( (int)result < 0 )
    sub_14052266C(v14, 277, qword_140C4C7E0, v12, (int)result);
  return result;
}
