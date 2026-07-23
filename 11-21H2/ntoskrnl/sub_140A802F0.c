/*
 * XREFs of sub_140A802F0 @ 0x140A802F0
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1403B51A0 @ 0x1403B51A0 (sub_1403B51A0.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 *     sub_14055969C @ 0x14055969C (sub_14055969C.c)
 *     sub_1405FF5A0 @ 0x1405FF5A0 (sub_1405FF5A0.c)
 *     sub_140A80ACC @ 0x140A80ACC (sub_140A80ACC.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 *     sub_140A81184 @ 0x140A81184 (sub_140A81184.c)
 *     sub_140A8CA78 @ 0x140A8CA78 (sub_140A8CA78.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 *     sub_140A8D11C @ 0x140A8D11C (sub_140A8D11C.c)
 */

__int64 __fastcall sub_140A802F0(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( (dword_140D018F4 || (dword_140C29FC0 & 0x20) != 0) && (dword_140C1AA70 == 1 || (a2->Flags & 0x40000000) != 0) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
    {
      KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
      qword_140D57540 = CurrentIrql;
      *(_OWORD *)&xmmword_140D57548 = 0LL;
      *(_QWORD *)&BugCheckCode = 201LL;
      BugCheckParameter1 = 16LL;
      sub_1405FF5A0();
    }
    if ( (unsigned int)sub_140A8D11C(a2, &v17) )
    {
      v8 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 160) = Object;
        *(_QWORD *)(v8 + 168) = a2;
        *(_QWORD *)(v8 + 176) = a3;
        if ( **(_WORD **)(v8 + 168) != 6 && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
        {
          *(_BYTE *)(v8 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
          qword_140D57540 = *(_QWORD *)(v8 + 168);
          *(_QWORD *)&BugCheckCode = 201LL;
          BugCheckParameter1 = 3LL;
          *(_OWORD *)&xmmword_140D57548 = 0LL;
          sub_1405FF5A0();
        }
        if ( !(unsigned __int8)sub_140A81184(Object) && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
        {
          *(_BYTE *)(v8 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
          qword_140D57540 = *(_QWORD *)(v8 + 160);
          *(_QWORD *)&BugCheckCode = 201LL;
          BugCheckParameter1 = 4LL;
          *(_OWORD *)&xmmword_140D57548 = 0LL;
          sub_1405FF5A0();
        }
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( !CurrentStackLocation[-1].MajorFunction )
        {
          FileObject = CurrentStackLocation[-1].FileObject;
          if ( FileObject )
          {
            if ( (FileObject->Flags & 0x204000) == 0x204000
              && !_bittest((const signed __int32 *)&qword_140D01450, 0x16u) )
            {
              *(_BYTE *)(v8 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
              qword_140D57540 = *(_QWORD *)(v8 + 160);
              xmmword_140D57548 = *(_QWORD *)(v8 + 168);
              *(&xmmword_140D57548 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
              *(_QWORD *)&BugCheckCode = 201LL;
              BugCheckParameter1 = 15LL;
              sub_1405FF5A0();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = sub_140A8CC6C(Object, a2, v8);
        if ( (dword_140D0110C & 2) != 0 )
          v14 = sub_14055969C(Object, a2, v13);
        else
          v14 = sub_1403B51C4((__int64)Object, a2);
        *v11 = v14;
        sub_140A8CA78(v8, v8 + 184, v12);
        v15 = *v11;
        sub_140203D88((__int64)&unk_140D59040, (_SLIST_ENTRY *)v8, v16);
        return v15;
      }
      else
      {
        return sub_140A80ACC(Object);
      }
    }
    else
    {
      return sub_140A80B3C(Object);
    }
  }
  else if ( (dword_140D0110C & 2) != 0 )
  {
    return sub_14055969C(Object, a2, a3);
  }
  else
  {
    return sub_1403B51C4((__int64)Object, a2);
  }
}
