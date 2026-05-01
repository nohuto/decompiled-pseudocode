/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_scalar_deleting_destructor_ @ 0x1801D8EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___ @ 0x1801D8968 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___::_ShellPositionerCallback__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
