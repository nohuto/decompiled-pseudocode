/*
 * XREFs of sub_140701A98 @ 0x140701A98
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     SePrivilegeObjectAuditAlarm @ 0x140724160 (SePrivilegeObjectAuditAlarm.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall sub_140701A98(void *a1, __int64 a2, struct _OBJECT_TYPE *a3)
{
  _QWORD *v3; // rsi
  NTSTATUS v5; // edi
  _DWORD *v6; // r9

  v3 = (_QWORD *)(a2 + 392);
  v5 = ObOpenObjectByPointer(
         a1,
         *(_DWORD *)(a2 + 384),
         (PACCESS_STATE)a2,
         0,
         a3,
         *(_BYTE *)(a2 + 388),
         (PHANDLE)(a2 + 392));
  if ( v5 >= 0 )
  {
    v6 = **(_DWORD ***)(a2 + 72);
    if ( v6 )
    {
      if ( *v6 )
        SePrivilegeObjectAuditAlarm(*v3, a2 + 32, *(_DWORD *)(a2 + 20), (_DWORD)v6, 1, *(_BYTE *)(a2 + 388));
    }
  }
  return (unsigned int)v5;
}
