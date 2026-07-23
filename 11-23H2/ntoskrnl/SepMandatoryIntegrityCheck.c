/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x1402B6130
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x140260890 (ExpReleaseResourceForThreadLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4 (ExpFastResourceLegacyAcquireShared.c)
 *     ExpFastResourceLegacyRelease @ 0x1403CA980 (ExpFastResourceLegacyRelease.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v10; // edi
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int16 *v16; // rcx
  struct _KTHREAD *v17; // rax
  ULONG_PTR v18; // r10
  __int16 v19; // cx
  __int16 v20; // ax
  unsigned __int8 v21; // cl
  struct _KTHREAD *v22; // rdx
  int v23; // eax
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  __int16 **v26; // rax
  __int16 *v27; // r13
  ULONG_PTR v28; // r8
  __int16 v29; // cx
  __int16 v30; // ax
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v33; // al
  struct _KTHREAD *v34; // rcx
  unsigned __int16 *v35; // r9
  int v36; // eax
  int v37; // eax
  __int16 v38; // cx
  unsigned __int16 v39; // r12
  __int16 v40; // bp
  __int16 v41; // si
  unsigned int v42; // edx
  char v43; // dl
  char v44; // r9
  char v45; // r8
  char v46; // al
  char v47; // r9
  char v48; // r10
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  __int64 result; // rax
  char v53; // [rsp+30h] [rbp-68h]
  char v54; // [rsp+34h] [rbp-64h]
  char v55; // [rsp+38h] [rbp-60h]
  __int16 v56; // [rsp+3Ch] [rbp-5Ch]
  char v57; // [rsp+40h] [rbp-58h]
  unsigned __int16 *Buf1; // [rsp+48h] [rbp-50h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v55 = 0;
  v10 = 0;
  v54 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( (_BYTE)a3 )
      goto LABEL_12;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_12;
    if ( v11 >= 0 )
    {
      v13 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v12 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v12 )
        goto LABEL_12;
      v13 = a2 + v12;
    }
    if ( v13 )
    {
      a3 = *(unsigned __int16 *)(v13 + 4);
      v14 = v13 + 8;
      v15 = 0;
      if ( *(_WORD *)(v13 + 4) )
      {
        while ( *(_BYTE *)v14 != 17 )
        {
          ++v15;
          v14 += *(unsigned __int16 *)(v14 + 2);
          if ( v15 >= (unsigned int)a3 )
            goto LABEL_12;
        }
        if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
        {
          v23 = *(_DWORD *)(v14 + 4);
          v16 = (unsigned __int16 *)(v14 + 8);
          v57 = v23;
LABEL_13:
          Buf1 = v16;
          if ( !a5 )
          {
LABEL_36:
            v25 = *(unsigned int *)(a4 + 208);
            if ( (_DWORD)v25 == -1 || (v26 = (__int16 **)(*(_QWORD *)(a4 + 152) + 16 * v25)) == 0LL )
              v27 = (__int16 *)SeUntrustedMandatorySid;
            else
              v27 = *v26;
            if ( !a5 )
            {
LABEL_59:
              v35 = Buf1;
              v36 = *((unsigned __int8 *)Buf1 + 1);
              if ( (_BYTE)v36 )
                v37 = *(_DWORD *)&Buf1[2 * (v36 - 1) + 4];
              else
                v37 = 0;
              *(_DWORD *)(a6 + 12) = v37;
              v38 = *v27;
              v39 = *Buf1;
              v40 = HIBYTE(*v27);
              v41 = HIBYTE(*Buf1);
              v56 = *v27;
              if ( *Buf1 == *v27 )
              {
                if ( !memcmp(Buf1, v27, 4 * ((unsigned __int64)*Buf1 >> 8) + 8) )
                  goto LABEL_78;
                v38 = v56;
                v35 = Buf1;
              }
              if ( *(_DWORD *)(v27 + 1) || v27[3] != 4096 || *(_DWORD *)(v35 + 1) || v35[3] != 4096 )
              {
                v44 = 0;
                v7 = -1073741811;
LABEL_108:
                *(_BYTE *)(a6 + 4) = v55;
                *(_BYTE *)(a6 + 5) = v54;
                result = v7;
                *(_DWORD *)a6 = v10;
                *(_BYTE *)(a6 + 6) = v44;
                return result;
              }
              if ( v38 == v39 )
              {
                if ( !memcmp(v27, v35, 4LL * (unsigned __int8)v40 + 8) )
                  goto LABEL_78;
                v35 = Buf1;
              }
              if ( (_BYTE)v40 )
                v42 = *(_DWORD *)&v27[2 * (unsigned __int8)v40 + 2];
              else
                v42 = 0;
              if ( (_BYTE)v41 && v42 < *(_DWORD *)&v35[2 * (unsigned __int8)v41 + 2] )
              {
                v43 = 0;
                goto LABEL_79;
              }
LABEL_78:
              v43 = 1;
LABEL_79:
              if ( (*(_DWORD *)(a6 + 8) & 1) != 0 )
              {
                v44 = 1;
                v54 = 1;
                v10 = *a1 | ~*a1 & a1[2] | 0x120000;
                if ( v43 )
                {
                  v55 = 1;
                  v10 |= a1[3] | 0x11FFFFF;
                  v53 = 1;
                  goto LABEL_104;
                }
              }
              else
              {
                v44 = 0;
              }
              v45 = v44;
              v46 = v44;
              if ( v43 )
                goto LABEL_105;
              v47 = 0;
              v48 = 0;
              if ( (v57 & 2) == 0 )
                v47 = v46;
              v54 = v47;
              if ( (v57 & 4) == 0 )
                v48 = v45;
              v53 = v48;
              v55 = 0;
              if ( (v57 & 2) != 0 )
              {
                if ( v48 )
                  v49 = ~*a1 & a1[2] | 0x100000;
                else
                  v49 = 0;
                v10 &= v49 | ~(*a1 | 0x20000);
              }
              if ( (v57 & 4) != 0 )
              {
                if ( v47 )
                  v50 = *a1 | 0x20000;
                else
                  v50 = 0;
                v10 &= ~(~v50 & (a1[2] & ~*a1 | 0x100000));
              }
              if ( (v57 & 1) != 0 )
              {
                v51 = 0;
                if ( v48 )
                  v51 = a1[2] & ~*a1 | 0x100000;
                if ( v47 )
                  v51 |= *a1 | 0x20000;
                v54 = v47;
                v53 = v48;
                v10 &= ~(~v51 & (a1[1] | 0x10D0000));
              }
LABEL_104:
              v44 = v53;
LABEL_105:
              if ( _bittest64((const signed __int64 *)(a4 + 72), 0x20u) )
                v10 |= 0x80000u;
              goto LABEL_108;
            }
            v28 = *(_QWORD *)(a4 + 48);
            v29 = *(_WORD *)(v28 + 26);
            v30 = v29 & 0x41;
            if ( FeatureFastResource2 )
            {
              if ( v30 != 1 )
              {
                if ( (v29 & 1) == 0 )
                  goto LABEL_57;
                CurrentIrql = KeGetCurrentIrql();
                CurrentThread = KeGetCurrentThread();
                if ( CurrentIrql > 2u )
                  KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
                if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
                {
                  if ( (v29 & 1) != 0 )
                  {
LABEL_49:
                    ExpFastResourceLegacyRelease(*(_QWORD *)(a4 + 48));
LABEL_58:
                    KeLeaveCriticalRegion();
                    goto LABEL_59;
                  }
LABEL_57:
                  ExpReleaseResourceForThreadLite(*(_QWORD *)(a4 + 48), (ULONG_PTR)KeGetCurrentThread());
                  goto LABEL_58;
                }
LABEL_117:
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
              }
            }
            else if ( v30 != 1 )
            {
              if ( (v29 & 1) == 0 )
                goto LABEL_57;
              v33 = KeGetCurrentIrql();
              v34 = KeGetCurrentThread();
              if ( v33 > 2u )
                KeBugCheckEx(0x1C6u, 0LL, v33, 2uLL, 0LL);
              if ( v33 || (v34->MiscFlags & 0x400) != 0 || v34->WaitBlock[3].SpareLong )
                goto LABEL_49;
              goto LABEL_117;
            }
            KeBugCheckEx(0x1C6u, 0xFuLL, v28, 0LL, 0LL);
          }
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = *(_QWORD *)(a4 + 48);
          v19 = *(_WORD *)(v18 + 26);
          v20 = v19 & 0x41;
          if ( FeatureFastResource2 )
          {
            if ( v20 != 1 )
            {
              if ( (v19 & 1) == 0 )
                goto LABEL_35;
              v21 = KeGetCurrentIrql();
              v22 = KeGetCurrentThread();
              if ( v21 > 1u )
                KeBugCheckEx(0x1C6u, 0LL, v21, 1uLL, 0LL);
              if ( (v22->ApcState.InProgressFlags & 2) == 0 )
              {
                if ( !v21 && (v22->MiscFlags & 0x400) == 0 && !v22->WaitBlock[3].SpareLong )
                  goto LABEL_117;
                v19 = *(_WORD *)(v18 + 26);
                goto LABEL_33;
              }
              goto LABEL_113;
            }
          }
          else if ( v20 != 1 )
          {
            if ( (v19 & 1) == 0 )
              goto LABEL_35;
            v24 = KeGetCurrentIrql();
            a3 = (__int64)KeGetCurrentThread();
            if ( v24 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, v24, 1uLL, 0LL);
            if ( (*(_BYTE *)(a3 + 192) & 2) == 0 )
            {
              if ( !v24 && (*(_DWORD *)(a3 + 116) & 0x400) == 0 && !*(_DWORD *)(a3 + 484) )
                goto LABEL_117;
LABEL_33:
              if ( (v19 & 1) != 0 )
              {
                ExpFastResourceLegacyAcquireShared(*(_QWORD *)(a4 + 48));
                goto LABEL_36;
              }
LABEL_35:
              ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1, a3, a4);
              goto LABEL_36;
            }
LABEL_113:
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          }
          KeBugCheckEx(0x1C6u, 0xFuLL, v18, 0LL, 0LL);
        }
      }
    }
LABEL_12:
    v16 = (unsigned __int16 *)SepDefaultMandatorySid;
    v57 = 1;
    goto LABEL_13;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
