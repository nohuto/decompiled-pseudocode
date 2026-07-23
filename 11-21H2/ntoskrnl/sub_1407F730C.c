/*
 * XREFs of sub_1407F730C @ 0x1407F730C
 * Callers:
 *     sub_14072A9B0 @ 0x14072A9B0 (sub_14072A9B0.c)
 * Callees:
 *     sub_140288178 @ 0x140288178 (sub_140288178.c)
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 *     sub_140288250 @ 0x140288250 (sub_140288250.c)
 *     sub_1402885A0 @ 0x1402885A0 (sub_1402885A0.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407F730C(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  int v14; // ebx
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[72]; // [rsp+40h] [rbp-C0h] BYREF

  v15[0] = 0;
  memset(v16, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = sub_1402885A0((__int64)v16, 249, (__int64)AttachedDevice, v10, *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL), 1u);
  if ( (int)result >= 0 )
  {
    LODWORD(v16[6]) = a5;
    v16[3] = a2;
    v16[4] = a3;
    v16[5] = a4;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v13 = sub_140288250((__int64)v16, 1, 1, v15);
    v14 = v13;
    if ( WORD1(v16[9]) )
      v14 = sub_1402881A0((__int64)v16, v13);
    KeLeaveCriticalRegion();
    sub_140288178((__int64)v16);
    if ( v14 >= 0 && (v15[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v14;
  }
  return result;
}
