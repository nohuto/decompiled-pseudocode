/*
 * XREFs of ?GetLogFileObject@CClfsManagedLogClient@@QEAAPEAU_FILE_OBJECT@@XZ @ 0x14057AED1
 * Callers:
 *     sub_14057AE30 @ 0x14057AE30 (sub_14057AE30.c)
 * Callees:
 *     <none>
 */

struct _FILE_OBJECT *__fastcall CClfsManagedLogClient::GetLogFileObject(CClfsManagedLogClient *this)
{
  return (struct _FILE_OBJECT *)*((_QWORD *)this + 11);
}
