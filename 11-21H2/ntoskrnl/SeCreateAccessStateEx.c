/*
 * XREFs of SeCreateAccessStateEx @ 0x14071F190
 * Callers:
 *     sub_14066CC94 @ 0x14066CC94 (sub_14066CC94.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     SeCreateAccessState @ 0x14071F140 (SeCreateAccessState.c)
 *     sub_1407527F4 @ 0x1407527F4 (sub_1407527F4.c)
 *     sub_140916788 @ 0x140916788 (sub_140916788.c)
 * Callees:
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return sub_140347A20(&v9, a3, a4, a5, a6);
}
