/*
 * XREFs of sub_1409663D0 @ 0x1409663D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     sub_1402F61F8 @ 0x1402F61F8 (sub_1402F61F8.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_1407B0EB0 @ 0x1407B0EB0 (sub_1407B0EB0.c)
 */

__int64 __fastcall sub_1409663D0(HANDLE Handle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // r14
  int v6; // edi
  KPROCESSOR_MODE v7; // r9
  __int64 v8; // r9
  struct _KTHREAD *v9; // r15
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rsi
  struct _KTHREAD *v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-40h] BYREF
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+48h] [rbp-30h]
  __int64 v20[5]; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0;
  v16 = 0;
  v17 = 0LL;
  v22 = 0;
  v20[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v6 = -1073741811;
  }
  else
  {
    sub_1407B0EB0(a2, &v22, &v21);
    v7 = *((_BYTE *)KeGetCurrentThread() + 562);
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 0x20000u, qword_140D069D8, v7, &Object, 0LL);
    v5 = Object;
    v19 = Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6 && *((_QWORD *)KeGetCurrentThread() + 23) == *((_QWORD *)Object + 3) )
      {
        v6 = sub_1407ABD80((__int64)Object, v22, v21, v8, &v17);
        v21 = v6;
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(v17 + 40) & 0x80u) == 0 )
          {
            v9 = *(struct _KTHREAD **)(v17 + 32);
            if ( v9 )
            {
              v10 = (struct _KTHREAD *)sub_1402F6220(*(_QWORD *)(v17 + 32), &v16);
              v11 = v10;
              if ( v10 )
              {
                sub_14030F330((__int64)v10);
                if ( v16 )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( *((_QWORD *)PsGetThreadProcess(v9) + 299) || (unsigned __int8)PoEnergyEstimationEnabled() )
              {
                v11 = v9;
                sub_14030F330((__int64)v9);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v12 = KeGetCurrentThread();
                if ( (*((_DWORD *)v12 + 29) & 0x400) != 0 || *((_BYTE *)v12 + 586) == 1 )
                  v13 = 0LL;
                else
                  v13 = *((_QWORD *)v12 + 30);
                if ( v13 )
                {
                  sub_1402F61F8((__int64)v11, v20);
                  *(_QWORD *)(v14 + 696) = v20[0];
                }
              }
            }
            sub_1407A7628(v17);
          }
          else
          {
            sub_1407A7628(v17);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
