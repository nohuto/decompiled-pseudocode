/*
 * XREFs of sub_140A80B3C @ 0x140A80B3C
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_1405FF5A0 @ 0x1405FF5A0 (sub_1405FF5A0.c)
 *     sub_140A81184 @ 0x140A81184 (sub_140A81184.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 */

__int64 __fastcall sub_140A80B3C(PVOID Object, IRP *a2, __int64 a3)
{
  bool v6; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PFILE_OBJECT FileObject; // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v14[24]; // [rsp+28h] [rbp-81h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = a2->Type == 6;
  v14[20] = Object;
  v14[21] = a2;
  v14[22] = a3;
  if ( !v6 && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
    *(_OWORD *)&xmmword_140D57548 = 0LL;
    *(_QWORD *)&BugCheckCode = 201LL;
    BugCheckParameter1 = 3LL;
    qword_140D57540 = (ULONG_PTR)a2;
    sub_1405FF5A0();
  }
  if ( !(unsigned __int8)sub_140A81184(Object) && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
    *(_OWORD *)&xmmword_140D57548 = 0LL;
    *(_QWORD *)&BugCheckCode = 201LL;
    BugCheckParameter1 = 4LL;
    qword_140D57540 = (ULONG_PTR)Object;
    sub_1405FF5A0();
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation[-1].MajorFunction )
  {
    FileObject = CurrentStackLocation[-1].FileObject;
    if ( FileObject )
    {
      if ( (FileObject->Flags & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
      {
        BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
        *(&xmmword_140D57548 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&BugCheckCode = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140D57540 = (ULONG_PTR)Object;
        xmmword_140D57548 = (ULONG_PTR)a2;
        sub_1405FF5A0();
      }
    }
  }
  v9 = sub_140A8CC6C(Object, a2, v14);
  if ( (dword_140D0110C & 2) != 0 )
    v11 = sub_14055969C(Object, a2, v10);
  else
    v11 = sub_1403B51C4((__int64)Object, a2);
  v13 = v11;
  sub_140A8CA78(v14, &v13, v9);
  return v13;
}
