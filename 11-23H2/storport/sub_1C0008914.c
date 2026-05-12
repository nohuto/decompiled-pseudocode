/*
 * XREFs of sub_1C0008914 @ 0x1C0008914
 * Callers:
 *     sub_1C0007728 @ 0x1C0007728 (sub_1C0007728.c)
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0011B58 @ 0x1C0011B58 (sub_1C0011B58.c)
 *     sub_1C0011DBC @ 0x1C0011DBC (sub_1C0011DBC.c)
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 *     sub_1C0035FBC @ 0x1C0035FBC (sub_1C0035FBC.c)
 *     sub_1C003766C @ 0x1C003766C (sub_1C003766C.c)
 *     sub_1C0037B04 @ 0x1C0037B04 (sub_1C0037B04.c)
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 *     StorPortSynchronizeAccess @ 0x1C0047590 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0008914(__int64 a1, KIRQL a2)
{
  KIRQL v2; // si
  struct _KINTERRUPT *v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  PKINTERRUPT *v6; // r14

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4305) )
  {
    v4 = *(_QWORD *)(a1 + 4288);
    if ( *(_DWORD *)(a1 + 4272) == 2 )
    {
      v5 = *(_DWORD *)(v4 + 4) - 1;
      if ( *(_DWORD *)(v4 + 4) != 1 )
      {
        v6 = (PKINTERRUPT *)(48LL * v5 + v4 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v4);
          v6 -= 6;
          --v5;
        }
        while ( v5 );
      }
    }
    v3 = *(struct _KINTERRUPT **)(v4 + 24);
    a2 = v2;
    goto LABEL_7;
  }
  v3 = *(struct _KINTERRUPT **)(a1 + 728);
  if ( v3 )
LABEL_7:
    KeReleaseInterruptSpinLock(v3, a2);
}
