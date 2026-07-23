/*
 * XREFs of sub_1409ADDA4 @ 0x1409ADDA4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 *     sub_1409BFCA0 @ 0x1409BFCA0 (sub_1409BFCA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409ADDA4(ULONG_PTR BugCheckParameter1, _QWORD *a2, unsigned __int16 a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // r14
  __int64 v10; // r9
  int v11; // esi
  unsigned int v12; // edx
  char v13; // di
  _QWORD *v14; // rcx
  char v15; // di
  __int64 *v16; // r15
  __int64 v17; // r12
  unsigned __int64 **v18; // rax
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rbx
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-98h]
  struct _KTHREAD *v24; // [rsp+30h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v25; // [rsp+38h] [rbp-80h]
  _OWORD v27[3]; // [rsp+48h] [rbp-70h] BYREF

  memset(v27, 0, sizeof(v27));
  v4 = 0;
  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v9 = *((_QWORD *)CurrentThread + 23);
  --*((_WORD *)CurrentThread + 242);
  v25 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112)) )
  {
    v12 = 0;
    v23 = v5;
    v13 = 2;
    if ( v5 )
    {
      v14 = a2;
      while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
        {
          v11 = -1073741558;
          goto LABEL_42;
        }
        if ( (unsigned __int64)(*v14 - 0x10000LL) > 0x7FFFFFFDFFFFLL )
        {
          v11 = -1073741503;
          goto LABEL_42;
        }
        if ( (v14[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          v11 = -1073741811;
          goto LABEL_42;
        }
        ++v12;
        v14 += 2;
        if ( v12 >= v5 )
          goto LABEL_10;
      }
      v11 = -1073741749;
    }
    else
    {
LABEL_10:
      if ( BugCheckParameter1 != v9 )
      {
        sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v27, v10);
        v13 = 3;
      }
      v15 = v13 | 4;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2848, 0LL);
      if ( v5 )
      {
        v16 = a2 + 1;
        while ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 )
        {
          if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 )
          {
            v11 = -1073741558;
            goto LABEL_38;
          }
          v17 = *v16;
          v18 = (unsigned __int64 **)(BugCheckParameter1 + 2840);
          if ( (*v16 & 1) != 0 )
          {
            v11 = sub_1409BFCA0(v18, *(v16 - 1));
            if ( v11 < 0 )
              goto LABEL_38;
          }
          else
          {
            v19 = *v18;
            if ( !*v18 )
              goto LABEL_34;
            v20 = *(v16 - 1);
            do
            {
              v21 = sub_1408826B4(v20, (__int64)v19);
              if ( v21 >= 0 )
              {
                if ( v21 <= 0 )
                  break;
                v19 = (unsigned __int64 *)v19[1];
              }
              else
              {
                v19 = (unsigned __int64 *)*v19;
              }
            }
            while ( v19 );
            if ( !v19 )
            {
LABEL_34:
              v11 = -1073741275;
              goto LABEL_38;
            }
            RtlAvlRemoveNode((unsigned __int64 *)(BugCheckParameter1 + 2840), v19);
            ExFreePoolWithTag(v19, 0);
          }
          ++v4;
          *v16 = v17 | 2;
          v16 += 2;
          if ( v4 >= v23 )
            goto LABEL_37;
          CurrentThread = v24;
        }
        v11 = -1073741749;
      }
      else
      {
LABEL_37:
        v11 = 0;
      }
LABEL_38:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2848), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter1 + 2848);
      sub_1402AFC00(BugCheckParameter1 + 2848);
      if ( (v15 & 1) != 0 )
        sub_1402D0930((__int64)v27, 0LL);
    }
LABEL_42:
    sub_1402AD030(v25);
  }
  else
  {
    v11 = -1073741558;
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  *a4 = v4;
  return (unsigned int)v11;
}
