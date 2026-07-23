/*
 * XREFs of sub_1407768EC @ 0x1407768EC
 * Callers:
 *     sub_140776650 @ 0x140776650 (sub_140776650.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     IoClearActivityIdThread @ 0x1402DE990 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x1402DE9B0 (IoSetActivityIdThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140561484 @ 0x140561484 (sub_140561484.c)
 *     sub_1407758D0 @ 0x1407758D0 (sub_1407758D0.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_140776880 @ 0x140776880 (sub_140776880.c)
 *     sub_140776CFC @ 0x140776CFC (sub_140776CFC.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 *     sub_140946E0C @ 0x140946E0C (sub_140946E0C.c)
 *     sub_14094A194 @ 0x14094A194 (sub_14094A194.c)
 *     sub_14094A25C @ 0x14094A25C (sub_14094A25C.c)
 *     sub_140A318B0 @ 0x140A318B0 (sub_140A318B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407768EC(IRP *a1)
{
  IRP *v1; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // rsi
  char v4; // r14
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  void **v10; // r14
  unsigned int Length; // r8d
  struct _KTHREAD *v12; // rax
  PVOID v14; // r13
  PVOID v15; // r12
  unsigned int *v16; // r14
  int v17; // edx
  unsigned int v18; // r8d
  const wchar_t *v19; // rax
  void *v20; // rax
  int v21; // eax
  unsigned int v22; // eax
  void *v23; // rax
  unsigned int v24; // ecx
  _WORD *v25; // rdx
  void *v26; // rax
  int v27; // eax
  void *v28; // rax
  void *v29; // rax
  int v30; // eax
  int CurrentThreadProcessId; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  void *Pool2; // rax
  unsigned int v35; // ecx
  struct _IO_STACK_LOCATION *v36; // r8
  _WORD *v37; // rdx
  __int64 v38; // [rsp+20h] [rbp-118h]
  char v39; // [rsp+61h] [rbp-D7h]
  _DWORD v40[3]; // [rsp+64h] [rbp-D4h] BYREF
  PVOID P; // [rsp+70h] [rbp-C8h]
  PVOID v42; // [rsp+78h] [rbp-C0h]
  unsigned int v43; // [rsp+80h] [rbp-B8h] BYREF
  PVOID v44; // [rsp+88h] [rbp-B0h]
  PVOID v45; // [rsp+90h] [rbp-A8h]
  unsigned int v46; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+A0h] [rbp-98h]
  struct _IO_STACK_LOCATION *v48; // [rsp+A8h] [rbp-90h]
  const wchar_t *v49; // [rsp+B0h] [rbp-88h]
  __int64 v50; // [rsp+B8h] [rbp-80h]
  IRP *v51; // [rsp+C0h] [rbp-78h]
  PVOID FsContext2; // [rsp+C8h] [rbp-70h] BYREF
  struct _IO_STACK_LOCATION *v53; // [rsp+D0h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-60h]
  __int128 v55; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-48h] BYREF

  v1 = a1;
  v51 = a1;
  v44 = a1;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v53 = CurrentStackLocation;
  v48 = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v3 = (__int64)FsContext2;
  v4 = 0;
  v5 = 0LL;
  v50 = 0LL;
  v56 = 0LL;
  v39 = 0;
  v43 = 0;
  v46 = 0;
  v55 = 0LL;
  if ( !FsContext2 )
  {
    v9 = -1073741637;
    goto LABEL_17;
  }
  if ( !a1->AssociatedIrp.MasterIrp )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  BugCheckParameter2 = v3 + 64;
  ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
  v7 = *(_DWORD *)(v3 + 216);
  if ( (v7 & 8) != 0 )
  {
    v9 = -1073741536;
  }
  else if ( (v7 & 0x10) != 0 || (v8 = v7 | 0x10, *(_DWORD *)(v3 + 216) = v8, v4 = 1, (v8 & 4) != 0) )
  {
    v9 = -1073741637;
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 0x10 )
    {
      v9 = MesDecodeBufferHandleCreate(
             v1->AssociatedIrp.MasterIrp,
             CurrentStackLocation->Parameters.Create.Options,
             v3 + 16);
      if ( v9 < 0 )
        goto LABEL_14;
      v10 = (void **)(v3 + 24);
      NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_1400023D8, &off_140C02FB0, 0, v3 + 24);
      v9 = sub_140776CFC(*(_QWORD *)(v3 + 24));
      if ( v9 < 0 )
        goto LABEL_13;
      if ( !sub_140776274(*v10) )
      {
        v56 = *(_OWORD *)*v10;
        v5 = IoSetActivityIdThread((__int64)&v56);
        v50 = v5;
        v39 = 1;
      }
      if ( (byte_140C0DD4A & 0x40) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 216) |= 4u;
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      v14 = 0LL;
      v42 = 0LL;
      v48 = 0LL;
      FsContext2 = 0LL;
      v45 = 0LL;
      v15 = 0LL;
      v47 = 0LL;
      v44 = 0LL;
      v16 = (unsigned int *)*v10;
      if ( (int)sub_14094A194(v16[4], &FsContext2) < 0 )
      {
LABEL_86:
        if ( v44 )
          ExFreePoolWithTag(v44, 0x58706E50u);
        if ( v15 )
          ExFreePoolWithTag(v15, 0x58706E50u);
        if ( v45 )
          ExFreePoolWithTag(v45, 0x58706E50u);
        if ( v47 )
          ExFreePoolWithTag(v47, 0x58706E50u);
        if ( v14 )
          ExFreePoolWithTag(v14, 0x58706E50u);
        v5 = v50;
        goto LABEL_12;
      }
      v17 = 0;
      v49 = 0LL;
      v18 = v16[5];
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = L"Instance";
        }
        else
        {
          if ( v18 != 2 )
          {
            v17 = -1073741811;
            goto LABEL_40;
          }
          v19 = L"Instances";
        }
      }
      else
      {
        v19 = L"Type";
      }
      v49 = v19;
LABEL_40:
      if ( v17 < 0 )
        goto LABEL_86;
      if ( v18 == 1 )
      {
        v48 = (struct _IO_STACK_LOCATION *)*((_QWORD *)v16 + 3);
      }
      else if ( v18 == 2 )
      {
        v33 = v16[6];
        if ( v33 <= 2 )
          goto LABEL_86;
        Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v33, 1483763280LL);
        v44 = Pool2;
        if ( !Pool2 )
          goto LABEL_85;
        memmove(Pool2, *((const void **)v16 + 4), 2LL * v16[6]);
        v35 = v16[6] - 2;
        v36 = (struct _IO_STACK_LOCATION *)v44;
        if ( v16[6] != 2 )
        {
          v37 = (char *)v44 + 2 * v35;
          do
          {
            if ( !*v37 )
              *v37 = 32;
            --v37;
            --v35;
          }
          while ( v35 );
        }
        v48 = v36;
      }
      v40[0] = 512;
      v20 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
      P = v20;
      if ( v20 )
      {
        v21 = sub_14094A25C(v16[10], v20, 512LL, v40);
        if ( v21 != -1073741789 )
          goto LABEL_47;
        ExFreePoolWithTag(P, 0x58706E50u);
        v20 = (void *)ExAllocatePool2(256LL, v40[0], 1483763280LL);
        P = v20;
        if ( v20 )
        {
          v21 = sub_14094A25C(v16[10], v20, v40[0], v40);
LABEL_47:
          if ( v21 >= 0 )
          {
            if ( (v16[10] & 4) != 0 )
            {
              v22 = v16[12];
              if ( v22 <= 2 )
                goto LABEL_84;
              v23 = (void *)ExAllocatePool2(256LL, 2LL * v22, 1483763280LL);
              v45 = v23;
              if ( !v23 )
                goto LABEL_84;
              memmove(v23, *((const void **)v16 + 7), 2LL * v16[12]);
              v24 = v16[12] - 2;
              if ( v16[12] != 2 )
              {
                v25 = (char *)v45 + 2 * v24;
                do
                {
                  if ( !*v25 )
                    *v25 = 32;
                  --v25;
                  --v24;
                }
                while ( v24 );
              }
            }
            if ( !v16[16] )
              goto LABEL_62;
            v40[0] = 512;
            v26 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
            v47 = v26;
            if ( !v26 )
              goto LABEL_84;
            v27 = sub_140946E0C(*((_QWORD *)v16 + 9), v16[16], (_DWORD)v26, 512, (__int64)v40);
            if ( v27 != -1073741789 )
              goto LABEL_61;
            ExFreePoolWithTag(v47, 0x58706E50u);
            v28 = (void *)ExAllocatePool2(256LL, v40[0], 1483763280LL);
            v47 = v28;
            if ( v28 )
            {
              v27 = sub_140946E0C(*((_QWORD *)v16 + 9), v16[16], (_DWORD)v28, v40[0], (__int64)v40);
LABEL_61:
              if ( v27 >= 0 )
              {
LABEL_62:
                if ( !v16[20] )
                  goto LABEL_68;
                v40[0] = 512;
                v29 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
                v42 = v29;
                if ( v29 )
                {
                  v30 = sub_140A318B0(v16[20], *((_QWORD *)v16 + 11), 512, (_DWORD)v29, (__int64)v40);
                  if ( v30 != -1073741789 )
                    goto LABEL_67;
                  ExFreePoolWithTag(v42, 0x58706E50u);
                  v29 = (void *)ExAllocatePool2(256LL, v40[0], 1483763280LL);
                  v42 = v29;
                  if ( v29 )
                  {
                    v30 = sub_140A318B0(v16[20], *((_QWORD *)v16 + 11), v40[0], (_DWORD)v29, (__int64)v40);
LABEL_67:
                    if ( v30 < 0 )
                    {
LABEL_82:
                      v14 = v42;
                      goto LABEL_83;
                    }
LABEL_68:
                    if ( (byte_140C0DD4A & 0x40) != 0 )
                    {
                      CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                      v14 = v42;
                      v15 = P;
                      LODWORD(v38) = CurrentThreadProcessId;
                      sub_140561484(
                        (__int64)FsContext2,
                        v32,
                        (const GUID *)v16,
                        v3,
                        v38,
                        FsContext2,
                        v49,
                        v48,
                        P,
                        v45,
                        v47,
                        v42);
                      goto LABEL_86;
                    }
                    goto LABEL_82;
                  }
                }
                v14 = v29;
LABEL_83:
                v15 = P;
                goto LABEL_86;
              }
            }
          }
LABEL_84:
          v15 = P;
          goto LABEL_85;
        }
      }
      v15 = v20;
LABEL_85:
      v14 = 0LL;
      goto LABEL_86;
    }
    v9 = -1073741789;
  }
LABEL_14:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  CurrentStackLocation = v53;
  v1 = v51;
  if ( v9 >= 0 )
  {
    Length = v53->Parameters.Read.Length;
    if ( Length <= 0x10 )
      v43 = 16;
    else
      v9 = sub_140777D40(v3, v51->AssociatedIrp.MasterIrp, Length, (unsigned int)&v43, (__int64)&v46);
  }
LABEL_17:
  if ( v4 )
  {
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( v9 < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      sub_140776E5C(v3);
    }
    else
    {
      sub_1407758D0(v3, CurrentStackLocation->Parameters.Read.Length, v46, &v55);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  sub_140776880(v1, v9, v43, &v55);
  if ( v39 )
    IoClearActivityIdThread(v5);
  return (unsigned int)v9;
}
