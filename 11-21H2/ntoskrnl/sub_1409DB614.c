/*
 * XREFs of sub_1409DB614 @ 0x1409DB614
 * Callers:
 *     sub_1409DA90C @ 0x1409DA90C (sub_1409DA90C.c)
 *     sub_1409DAEE4 @ 0x1409DAEE4 (sub_1409DAEE4.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

bool sub_1409DB614()
{
  REGHANDLE v0; // rdi
  char v1; // bl

  v0 = qword_140C16E68;
  v1 = 0;
  if ( EtwEventEnabled(qword_140C16E68, &stru_140039900) )
    return EtwEventEnabled(v0, &stru_140038BE8) != 0;
  return v1;
}
