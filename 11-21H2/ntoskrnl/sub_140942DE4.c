/*
 * XREFs of sub_140942DE4 @ 0x140942DE4
 * Callers:
 *     sub_14085CA7C @ 0x14085CA7C (sub_14085CA7C.c)
 *     IoReserveDependency @ 0x1409425A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 * Callees:
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 *     sub_14084436C @ 0x14084436C (sub_14084436C.c)
 *     sub_14084442C @ 0x14084442C (sub_14084442C.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 */

__int64 __fastcall sub_140942DE4(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // rbx
  bool v9; // zf

  v4 = sub_14084436C(a1);
  v5 = (__int64)v4;
  if ( v4 )
  {
    ++*((_DWORD *)v4 + 22);
  }
  else
  {
    v5 = sub_14084442C(a1);
    if ( !v5 )
      return (unsigned int)-1073741670;
  }
  v7 = sub_14084436C(a2);
  v8 = (__int64)v7;
  if ( v7 )
  {
    ++*((_DWORD *)v7 + 22);
    goto LABEL_9;
  }
  v8 = sub_14084442C(a2);
  if ( v8 )
  {
LABEL_9:
    v6 = sub_14055F864(v5, v8, a2);
    goto LABEL_10;
  }
  v6 = -1073741670;
LABEL_10:
  v9 = (*(_DWORD *)(v5 + 88))-- == 1;
  if ( v9 )
    sub_14085CA14((_QWORD *)v5);
  if ( v8 )
  {
    v9 = (*(_DWORD *)(v8 + 88))-- == 1;
    if ( v9 )
      sub_14085CA14((_QWORD *)v8);
  }
  return v6;
}
