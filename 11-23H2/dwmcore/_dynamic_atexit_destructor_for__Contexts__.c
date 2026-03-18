/*
 * XREFs of _dynamic_atexit_destructor_for__Contexts__ @ 0x1801242D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__Contexts__()
{
  ContextTable::~ContextTable((ContextTable *)&Block);
}
