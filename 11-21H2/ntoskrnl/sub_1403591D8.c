/*
 * XREFs of sub_1403591D8 @ 0x1403591D8
 * Callers:
 *     sub_140359020 @ 0x140359020 (sub_140359020.c)
 *     sub_140359140 @ 0x140359140 (sub_140359140.c)
 * Callees:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     sub_14033E1B0 @ 0x14033E1B0 (sub_14033E1B0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_14035A0F0 @ 0x14035A0F0 (sub_14035A0F0.c)
 *     sub_14035A160 @ 0x14035A160 (sub_14035A160.c)
 *     sub_14035A264 @ 0x14035A264 (sub_14035A264.c)
 *     sub_14035A364 @ 0x14035A364 (sub_14035A364.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 *     sub_14035A6C8 @ 0x14035A6C8 (sub_14035A6C8.c)
 *     sub_14035A718 @ 0x14035A718 (sub_14035A718.c)
 *     sub_14035A7F8 @ 0x14035A7F8 (sub_14035A7F8.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403591D8(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int8 v7; // r10
  int v8; // esi
  unsigned __int8 v9; // al
  int v10; // r15d
  int v11; // r9d
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  bool i; // zf
  int v18; // r14d
  _RTL_RB_TREE *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // si
  int v23; // edx
  int v24; // r10d
  char v25; // r15
  char v26; // al
  char v27; // dl
  __int64 v28; // rbx
  bool v29; // zf
  char v30; // al
  __int64 v31; // rdx
  int v32; // [rsp+30h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v34; // [rsp+A0h] [rbp+48h] BYREF
  int v35; // [rsp+A8h] [rbp+50h]
  int v36; // [rsp+B0h] [rbp+58h]
  int v37; // [rsp+B8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v7 = *(_BYTE *)(a1 + 792);
  v8 = a4;
  v9 = *(_BYTE *)(a1 + 870);
  v10 = a3;
  v34 = 0;
  v11 = a2;
  v12 = a1;
  if ( (v7 | v9) != 63 )
  {
    v13 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v13); !i; i = !_BitScanForward((unsigned int *)&a1, v13) )
    {
      v13 &= v13 - 1;
      v14 = 96 * a1;
      v15 = (unsigned __int8 *)(v14 + v12 + 1696);
      v16 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 || (v16 & 2) != 0 || v11 && (v16 & 1) != 0 )
        continue;
      if ( v16 >= 0 )
      {
        v29 = v11 == 0;
      }
      else
      {
        if ( !v11 )
        {
          if ( v15[17] )
            i = v10 == 0;
          else
            i = v8 == 0;
          if ( i )
            continue;
          goto LABEL_11;
        }
        if ( (v15[19] & 1) != 0 )
          continue;
        if ( !v15[17] )
        {
          if ( (unsigned __int8)sub_14035A7F8(v14 + v12 + 1696) == v15[48] )
            continue;
          goto LABEL_11;
        }
        v30 = v15[-96 * v15[16] - 1501];
        if ( v30 > 30 )
          v30 = 30;
        v29 = v30 == (char)v15[48];
      }
      if ( v29 )
        continue;
LABEL_11:
      v34 = 0;
      v18 = 0;
      v32 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v19 = sub_14034F230((__int64)v15, v11, &LockHandle);
      v20 = (__int64)v19;
      if ( v19 )
      {
        if ( v15[17] )
        {
          if ( !v10 )
            goto LABEL_38;
          if ( v15 != (unsigned __int8 *)v19 )
            sub_14035A718(v15, v19);
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 )
            v22 = *(_BYTE *)(v21 + 24);
          else
            v22 = 30;
          if ( !*(_BYTE *)(v20 + 17) )
          {
            v26 = sub_14035A7F8(v20);
            v27 = v22;
            if ( v26 < v22 )
              v27 = v26;
            v22 = v27;
          }
          sub_14033E1B0(v15, v20);
          v25 = sub_14035A6C8(v15);
          if ( v22 < v25 )
          {
            if ( v24 )
LABEL_48:
              sub_14035A160(v20, v24, a5, a6, a7);
            LOBYTE(v23) = v25;
            sub_14035A264(v20, v23, a5, a6, a7);
            v8 = v37;
            v10 = v36;
LABEL_38:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v18 )
            {
              v28 = (__int64)&v15[-96 * v15[16] - 1696];
              if ( ObReferenceObjectSafeWithTag(v28) )
              {
                if ( (v18 & 1) != 0 )
                  sub_140280754((KSPIN_LOCK *)v28, 2, 0x80000000);
                if ( (v18 & 2) != 0 && *(_DWORD *)(v28 + 1448) )
                {
                  if ( sub_1403614FC(qword_140C474D8) )
                  {
                    sub_14042A5E0(v28, v31);
                    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140C474D8 + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag((PVOID)v28, 0x746C6644u);
              }
            }
            goto LABEL_23;
          }
          if ( v24 )
            goto LABEL_48;
          v8 = v37;
          v10 = v36;
        }
        else
        {
          if ( !v8 )
            goto LABEL_38;
          if ( v15 != (unsigned __int8 *)v19 )
            sub_14035A364(v15, v19);
          sub_14035A0F0(v20, &v34);
          if ( v34 )
          {
            if ( (unsigned int)sub_14035A424((_DWORD)v15, (unsigned int)&v34, a5, a6, a7, (__int64)&v32)
              && v15 != (unsigned __int8 *)v20 )
            {
              sub_14035A364(v15, v20);
            }
            v18 = v32;
            goto LABEL_38;
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
LABEL_23:
      v11 = v35;
    }
  }
}
