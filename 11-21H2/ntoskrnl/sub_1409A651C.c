/*
 * XREFs of sub_1409A651C @ 0x1409A651C
 * Callers:
 *     sub_1409A666C @ 0x1409A666C (sub_1409A666C.c)
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 *     sub_1409A6850 @ 0x1409A6850 (sub_1409A6850.c)
 *     sub_1409A6940 @ 0x1409A6940 (sub_1409A6940.c)
 *     sub_1409A6B4C @ 0x1409A6B4C (sub_1409A6B4C.c)
 *     sub_1409A6C08 @ 0x1409A6C08 (sub_1409A6C08.c)
 *     sub_1409A6CB4 @ 0x1409A6CB4 (sub_1409A6CB4.c)
 *     sub_1409A6D68 @ 0x1409A6D68 (sub_1409A6D68.c)
 *     sub_1409A6E24 @ 0x1409A6E24 (sub_1409A6E24.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

__int64 __fastcall sub_1409A651C(void *a1, char a2, char a3, _QWORD *a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rsi
  KPROCESSOR_MODE v10; // r9
  struct _OBJECT_TYPE *v11; // r8
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // edi
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = a5;
  *a4 = 0LL;
  v10 = *((_BYTE *)CurrentThread + 562);
  v11 = qword_140D3CC60;
  *v7 = 0LL;
  a5 = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 2u, v11, v10, (PVOID *)&a5, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    *v7 = 0LL;
    sub_1409A8628("TtmiReferenceTerminalByHandle", 1007LL, (unsigned int)v12, (unsigned int)v12);
    sub_1409A8628("TtmpAcquireSessionFromTerminalHandle", 88LL, v13, v13);
    return v13;
  }
  v15 = (__int64)a5;
  *v7 = a5;
  if ( *(_DWORD *)(v15 + 28) )
  {
    if ( !a3 )
    {
      v16 = 98LL;
      goto LABEL_6;
    }
  }
  else if ( !a2 )
  {
    v16 = 93LL;
LABEL_6:
    v17 = -1073741788;
LABEL_7:
    sub_1409A8628("TtmpAcquireSessionFromTerminalHandle", v16, 0xFFFFFFFFLL, v17);
    return v17;
  }
  v18 = KeGetCurrentThread();
  --*((_WORD *)v18 + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  v19 = *(_QWORD *)(v15 + 16);
  if ( (*(_DWORD *)(v19 + 4) & 4) != 0 )
  {
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
    v16 = 105LL;
    v17 = -1073740715;
    goto LABEL_7;
  }
  *a4 = v19;
  return 0LL;
}
