/*
 * XREFs of sub_140347B50 @ 0x140347B50
 * Callers:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_14028AE58 @ 0x14028AE58 (sub_14028AE58.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

__int64 __fastcall sub_140347B50(int a1)
{
  __int64 result; // rax

  if ( dword_140D05010 )
    return sub_1405C5EC8(a1);
  return result;
}
