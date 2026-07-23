/*
 * XREFs of sub_14039AF70 @ 0x14039AF70
 * Callers:
 *     sub_14039AF3C @ 0x14039AF3C (sub_14039AF3C.c)
 * Callees:
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 */

__int64 __fastcall sub_14039AF70(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  unsigned __int64 v3; // rax
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v6 = 0LL;
  while ( 1 )
  {
    v3 = (unsigned __int64)qword_140D06B28;
    v4 = *(_DWORD *)qword_140D06B28;
    if ( !*(_DWORD *)qword_140D06B28 )
      break;
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
      LODWORD(v6) = (_DWORD)a1;
    }
    else
    {
      if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 2 )
      {
        _mm_lfence();
      }
      else if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 )
      {
        _mm_mfence();
      }
      v3 = __rdtsc();
      LODWORD(a2) = HIDWORD(v3);
      v3 = (unsigned int)v3;
      a2 = (unsigned int)a2;
    }
    a2 = *((_QWORD *)qword_140D06B28 + 2)
       + (((v3 | (a2 << 32)) * (unsigned __int128)*((unsigned __int64 *)qword_140D06B28 + 1)) >> 64);
    v6 = a2;
    LODWORD(a1) = *(_DWORD *)qword_140D06B28;
    if ( *(_DWORD *)qword_140D06B28 == v4 )
      goto LABEL_13;
  }
  sub_14054BFF0(589828LL, &v6);
LABEL_13:
  result = v6;
  if ( v2 )
    *v2 = v4;
  return result;
}
