/*
 * XREFs of sub_1C0014130 @ 0x1C0014130
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C0014130(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  POWER_STATE v7; // ebx
  REQUEST_POWER_COMPLETE *v8; // r9
  void *Context; // r8
  NTSTATUS v10; // esi
  bool v11; // cl
  char v12; // r14

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 1;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 43LL, &unk_1C008A080, v2, a2);
  }
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(int *)(v5 + 24);
  v7.SystemState = (SYSTEM_POWER_STATE)stru_1C0084418[v6];
  if ( *(_DWORD *)(v2 + 304) < (int)v6 )
  {
    v4 = 0;
  }
  else if ( *(_QWORD *)(v2 + 4896) )
  {
    v8 = sub_1C0015240;
    Context = (void *)v2;
    goto LABEL_6;
  }
  v8 = (REQUEST_POWER_COMPLETE *)&sub_1C00150F0;
  Context = (void *)a2;
LABEL_6:
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v10 = *(_DWORD *)(a2 + 48);
  if ( v10 >= 0 )
  {
    v11 = (_DWORD)v6 != 1 && *(_DWORD *)(v2 + 304) < (int)v6;
    v12 = 2;
    *(_DWORD *)(v2 + 312) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    *(_BYTE *)(v2 + 316) = v11;
    *(_DWORD *)(v2 + 304) = v6;
    v10 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v2 + 8), 2u, v7, v8, Context, 0LL);
    if ( v10 == 259 )
    {
      if ( v7.SystemState != PowerSystemWorking )
        v12 = 4;
      *(_BYTE *)(v2 + 107) |= v12;
      v10 = 0;
    }
  }
  if ( v4 || v10 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 296));
  else
    v10 = -1073741802;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 44LL, &unk_1C008A080, v2, a2, v10);
  }
  return (unsigned int)v10;
}
