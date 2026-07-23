/*
 * XREFs of sub_14081549C @ 0x14081549C
 * Callers:
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 *     sub_14083F680 @ 0x14083F680 (sub_14083F680.c)
 *     sub_1409DAF78 @ 0x1409DAF78 (sub_1409DAF78.c)
 *     sub_1409DB060 @ 0x1409DB060 (sub_1409DB060.c)
 *     sub_1409DB0F0 @ 0x1409DB0F0 (sub_1409DB0F0.c)
 *     sub_1409DB15C @ 0x1409DB15C (sub_1409DB15C.c)
 *     sub_1409DB1E4 @ 0x1409DB1E4 (sub_1409DB1E4.c)
 *     sub_1409DB278 @ 0x1409DB278 (sub_1409DB278.c)
 *     sub_1409DB4B0 @ 0x1409DB4B0 (sub_1409DB4B0.c)
 *     sub_1409DB664 @ 0x1409DB664 (sub_1409DB664.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall sub_14081549C(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = qword_140C16E68;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(qword_140C16E68, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
