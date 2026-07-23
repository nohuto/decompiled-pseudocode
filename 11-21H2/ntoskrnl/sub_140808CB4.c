/*
 * XREFs of sub_140808CB4 @ 0x140808CB4
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1406EA5EC @ 0x1406EA5EC (sub_1406EA5EC.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_1409569F4 @ 0x1409569F4 (sub_1409569F4.c)
 *     sub_140957DE0 @ 0x140957DE0 (sub_140957DE0.c)
 *     sub_14095A508 @ 0x14095A508 (sub_14095A508.c)
 */

void sub_140808CB4()
{
  char v0; // di
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( dword_140C44634 == 2 && (unsigned __int8)sub_140957DE0() )
  {
    sub_14077572C(1);
    v0 = 0;
    if ( qword_140C46278 )
    {
      v1 = (_QWORD *)*((_QWORD *)qword_140C46278 + 1);
      while ( 1 )
      {
        if ( !v1 )
          goto LABEL_20;
        v2 = v1[90];
        if ( v2 )
        {
          if ( (*(_BYTE *)(v2 + 16) & 2) != 0 && !(unsigned __int8)sub_14095A508() )
            break;
        }
        v3 = (_QWORD *)v1[1];
        if ( v3 )
        {
LABEL_16:
          v1 = v3;
        }
        else
        {
LABEL_10:
          v3 = (_QWORD *)*v1;
          if ( *v1 )
            goto LABEL_16;
          if ( v1 == qword_140C46278 )
            goto LABEL_20;
          while ( 1 )
          {
            v1 = (_QWORD *)v1[2];
            if ( *v1 )
              break;
            if ( v1 == qword_140C46278 )
              goto LABEL_18;
          }
          v1 = (_QWORD *)*v1;
LABEL_18:
          if ( v1 == qword_140C46278 )
            goto LABEL_20;
        }
      }
      sub_1409569F4((ULONG_PTR)v1);
      v0 = 1;
      goto LABEL_10;
    }
LABEL_20:
    sub_140775698(1);
    if ( v0 )
      sub_1406EA5EC();
  }
}
