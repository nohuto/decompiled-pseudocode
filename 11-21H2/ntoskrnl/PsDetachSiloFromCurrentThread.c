/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x1402D7F90
 * Callers:
 *     sub_1406608E8 @ 0x1406608E8 (sub_1406608E8.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     sub_1407F5E04 @ 0x1407F5E04 (sub_1407F5E04.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_14085D06C @ 0x14085D06C (sub_14085D06C.c)
 *     sub_140927240 @ 0x140927240 (sub_140927240.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_1409AC6C0 @ 0x1409AC6C0 (sub_1409AC6C0.c)
 *     sub_1409AC724 @ 0x1409AC724 (sub_1409AC724.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 *     sub_1409ACAD0 @ 0x1409ACAD0 (sub_1409ACAD0.c)
 *     sub_1409C5A90 @ 0x1409C5A90 (sub_1409C5A90.c)
 *     sub_1409CD41C @ 0x1409CD41C (sub_1409CD41C.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 *     sub_1409F8250 @ 0x1409F8250 (sub_1409F8250.c)
 *     sub_1409FB4F4 @ 0x1409FB4F4 (sub_1409FB4F4.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  *((_QWORD *)result + 203) = a1;
  return result;
}
