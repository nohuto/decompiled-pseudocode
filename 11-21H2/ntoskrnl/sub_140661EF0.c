/*
 * XREFs of sub_140661EF0 @ 0x140661EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

__int64 __fastcall sub_140661EF0(ULONG_PTR *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = 0;
  v5 = 0LL;
  ++dword_140C5466C;
  if ( a1 )
  {
    *((_DWORD *)a1 + 18) = 1;
    _InterlockedAdd((volatile signed __int32 *)a1 + 28, 1u);
    *((_DWORD *)a1 + 15) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 15) <= 1 )
      __fastfail(0xEu);
    if ( !a1[16] )
      goto LABEL_8;
  }
  else
  {
    a1 = &qword_140C54300;
  }
  v6 = (__int64 *)sub_140347C10((__int64)a1, 0LL);
  v5 = v6;
  if ( !v6 )
  {
LABEL_8:
    v3 = -1073741670;
    goto LABEL_6;
  }
  sub_14029F580(v6, v7, v8);
LABEL_6:
  a3[1] = v5;
  *a3 = sub_140661FA0;
  return v3;
}
