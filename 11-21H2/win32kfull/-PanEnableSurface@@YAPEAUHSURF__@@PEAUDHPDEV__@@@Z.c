/*
 * XREFs of ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0292EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0293B40 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0294FAC (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

HSURF __fastcall PanEnableSurface(struct DHPDEV__ *a1)
{
  int v1; // r8d
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  HSEMAPHORE v7; // rcx
  HSURF v8; // rax
  SURFOBJ *v9; // rax
  SURFOBJ *v10; // rsi
  DHPDEV v11; // rcx
  LONG v12; // r14d
  HSURF DeviceSurface; // rdi
  HDEV v14; // rdx
  HBITMAP Bitmap; // r14
  SURFOBJ *v16; // rax
  SURFOBJ *v17; // r15
  HDEV v18; // rdx
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  int v25; // [rsp+68h] [rbp-8h]
  SIZEL sizl; // [rsp+A0h] [rbp+30h]
  HSEMAPHORE v27; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_DWORD *)a1;
  v3 = *((_DWORD *)a1 + 1);
  v4 = (*((_DWORD *)a1 + 2) - *(_DWORD *)a1) >> 1;
  *((_DWORD *)a1 + 4) = v4;
  v5 = *((_DWORD *)a1 + 3) - v3;
  *((_DWORD *)a1 + 6) = v1 + v4;
  v5 >>= 1;
  *((_DWORD *)a1 + 5) = v5;
  v6 = v5 + v3;
  v27 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  v7 = v27;
  *((_DWORD *)a1 + 7) = v6;
  EngAcquireSemaphore(v7);
  v8 = (HSURF)(*((__int64 (__fastcall **)(_QWORD))a1 + 102))(*((_QWORD *)a1 + 4));
  if ( !v8 )
    goto LABEL_26;
  v9 = EngLockSurface(v8);
  v10 = v9;
  if ( !v9 )
  {
LABEL_25:
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v27);
    (*((void (__fastcall **)(_QWORD))a1 + 103))(*((_QWORD *)a1 + 4));
LABEL_26:
    DeviceSurface = 0LL;
    goto LABEL_27;
  }
  LODWORD(v9[1].hsurf) &= ~0x1000u;
  v11 = (DHPDEV)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 9) = v9;
  v9->dhpdev = v11;
  v12 = *((_DWORD *)a1 + 2);
  sizl = (SIZEL)*((_QWORD *)a1 + 1);
  DeviceSurface = EngCreateDeviceSurface(0LL, sizl, *((_DWORD *)a1 + 10));
  if ( !DeviceSurface )
  {
LABEL_24:
    EngUnlockSurface(v10);
    goto LABEL_25;
  }
  v14 = (HDEV)*((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 7) = DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v14, 0x394ABu, 3u, (DHSURF)a1 + 14, 0LL, 0, 0LL) )
  {
LABEL_23:
    EngDeleteSurface(DeviceSurface);
    goto LABEL_24;
  }
  Bitmap = EngCreateBitmap(sizl, v12, *((_DWORD *)a1 + 10), 1u, 0LL);
  v16 = EngLockSurface((HSURF)Bitmap);
  v17 = v16;
  if ( !v16 || (v18 = (HDEV)*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 8) = v16, !EngAssociateSurface((HSURF)Bitmap, v18, 0)) )
  {
LABEL_22:
    EngUnlockSurface(v17);
    EngDeleteSurface((HSURF)Bitmap);
    goto LABEL_23;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
  if ( !v20 || !v22 || !v24 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v25 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v23 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    goto LABEL_22;
  }
  RGNOBJ::vSet((RGNOBJ *)&v22);
  RGNOBJ::vSet((RGNOBJ *)&v20);
  *((_QWORD *)a1 + 10) = v22;
  *((_QWORD *)a1 + 11) = v20;
  *((_QWORD *)a1 + 12) = v24;
  PanSynchronize(a1, 0LL);
  if ( v25 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  if ( v23 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
LABEL_27:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v27);
  return DeviceSurface;
}
