/*
 * XREFs of DriverEntry @ 0x140A47010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     sub_140A5B860 @ 0x140A5B860 (sub_140A5B860.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __stdcall __noreturn DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int *v2; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // eax
  void *v14; // rsp
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rcx

  qword_140D068D0 = (__int64)DriverObject;
  if ( !*((_DWORD *)DriverObject->MajorFunction[3] + 9) )
    sub_140A70470(0xFFFFFFFFLL, qword_140D068D0);
  v2 = *(unsigned int **)(qword_140D068D0 + 136);
  _RDX = v2 - 96;
  *((_QWORD *)_RDX + 3) = _RDX;
  *((_QWORD *)_RDX + 4) = v2;
  v4 = __readcr0();
  *((_QWORD *)v2 + 32) = v4;
  v5 = __readcr2();
  *((_QWORD *)v2 + 33) = v5;
  v6 = __readcr3();
  *((_QWORD *)v2 + 34) = v6;
  v7 = __readcr4();
  *((_QWORD *)v2 + 35) = v7;
  __sgdt((char *)v2 + 342);
  v8 = *((_QWORD *)v2 + 43);
  *(_QWORD *)_RDX = v8;
  __sidt((char *)v2 + 358);
  *((_QWORD *)_RDX + 7) = *((_QWORD *)v2 + 45);
  __asm
  {
    str     word ptr [rdx+2F0h]
    sldt    word ptr [rdx+2F2h]
  }
  *v2 = 8064;
  _mm_setcsr(*v2);
  if ( !v2[9] )
    *(_WORD *)(v8 + 80) = 15360;
  __DS__ = 43;
  if ( !byte_140D06888 )
  {
    _AX = 0;
    __asm { lldt    ax }
  }
  *MK_FP(43, _RDX + 2) = *MK_FP(43, v8 + 66);
  *MK_FP(43, (char *)_RDX + 10) = *MK_FP(43, v8 + 68);
  *MK_FP(43, (char *)_RDX + 11) = *MK_FP(43, v8 + 71);
  *MK_FP(43, _RDX + 3) = *MK_FP(43, v8 + 72);
  v10 = (unsigned __int64)_RDX >> 32;
  __writemsr(0xC0000101, __PAIR64__(v10, (int)v2 - 384));
  __writemsr(0xC0000102, __PAIR64__(v10, (int)v2 - 384));
  if ( !*MK_FP(43, v2 + 9) )
  {
    _guard_dispatch_icall_fptr[0] = (__int64 (__fastcall *)())sub_14042A5E0;
    _guard_check_icall_fptr[0] = (__int64 (__fastcall *)())sub_14042A590;
  }
  v11 = sub_140A5B860(qword_140D068D0);
  if ( v11 )
  {
    _R8 = v11;
    if ( !*MK_FP(43, *MK_FP(43, qword_140D068D0 + 136) + 36LL) )
    {
      v13 = 1;
      if ( (byte_140E01843 & 1) != 0 )
        v13 = 3;
      __writemsr(0x6A2u, v13);
      __asm { setssbsy }
    }
    __asm
    {
      rstorssp qword ptr [r8]
      saveprevssp
    }
  }
  sub_140A57680(qword_140D068D0);
  if ( !*MK_FP(43, *MK_FP(43, qword_140D068D0 + 136) + 36LL) )
    sub_140A70470(0LL, qword_140D068D0);
  sub_140A56780(qword_140D068D0, (unsigned int)*MK_FP(43, *MK_FP(43, qword_140D068D0 + 136) + 36LL));
  __writecr8(0xFuLL);
  v14 = alloca((unsigned int)dword_140D050FC);
  v15 = *MK_FP(43, qword_140D068D0 + 144);
  v16 = *MK_FP(43, qword_140D068D0 + 152);
  if ( (byte_140E01840 & 1) != 0 )
  {
    v17 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->IdtBase) + 4216LL);
    __writegsqword(0xA008u, v17);
  }
  else
  {
    v17 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->TssBase) + 4LL);
  }
  __writegsqword(0x1A8u, v17);
  sub_140A580F0(v15, v16);
  if ( !*MK_FP(43, (char *)&KeGetPcr()[1].LockArray + 4) )
  {
    v21 = __rdtsc();
    v18 = __ROR8__(v21, 49);
    v22 = __ROL8__(qword_140C10E50 ^ v18 ^ v21, 16);
    LOWORD(v22) = 0;
    _security_cookie = __ROR8__(v22, 16);
    qword_140C0CA18 = ~_security_cookie;
  }
  CurrentThread = KeGetCurrentThread();
  *MK_FP(43, (char *)CurrentThread + 390) = 2;
  sub_140424300((__int64)CurrentThread, v18, v19, v20);
}
