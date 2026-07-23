/*
 * XREFs of sub_140762A68 @ 0x140762A68
 * Callers:
 *     sub_1407627C8 @ 0x1407627C8 (sub_1407627C8.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_1408620D0 @ 0x1408620D0 (sub_1408620D0.c)
 * Callees:
 *     sub_140762AB4 @ 0x140762AB4 (sub_140762AB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140762A68()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  v0 = (_QWORD *)sub_140762AB4();
  if ( v0 )
  {
    v1 = *v0;
    if ( *(_QWORD **)(*v0 + 8LL) != v0 || (v2 = (_QWORD *)v0[1], (_QWORD *)*v2 != v0) )
      __fastfail(3u);
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(v0, 0x66756263u);
  }
}
