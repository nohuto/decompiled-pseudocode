/*
 * XREFs of sub_140955848 @ 0x140955848
 * Callers:
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403CB720 @ 0x1403CB720 (sub_1403CB720.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140955848(_WORD *a1, char a2, WCHAR *a3, int a4)
{
  char v4; // r12
  HANDLE v8; // rdi
  int inited; // ebx
  __int16 v10; // cx
  _WORD *v11; // rdx
  WCHAR *Pool2; // rsi
  int v13; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rcx
  int v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+44h] [rbp-2Ch] BYREF
  int v19; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+C0h] [rbp+50h] BYREF
  int v24; // [rsp+C8h] [rbp+58h] BYREF

  v24 = a4;
  v4 = 0;
  *a3 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v23 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  inited = sub_1402E0AC4(a1, 0xC8uLL, &v21);
  if ( inited >= 0 )
  {
    v10 = *a1;
    v11 = a1;
    while ( v10 )
    {
      if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
        return (unsigned int)-1073741773;
      v10 = *++v11;
    }
    inited = sub_1402E0340(a3, 0xC8uLL, L"Root", 0LL, 0LL, 2048);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, a3);
      if ( inited >= 0 )
      {
        inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
        if ( inited >= 0 )
        {
          inited = sub_1403CB720(a3, 200LL);
          if ( inited >= 0 )
          {
            inited = sub_1403CB720(a3, 200LL);
            if ( inited >= 0 )
            {
              Pool2 = (WCHAR *)ExAllocatePool2(256LL, 400LL, 879783504LL);
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              v13 = 0;
              while ( 1 )
              {
                if ( v8 )
                {
                  ZwClose(v8);
                  v8 = 0LL;
                  KeyHandle = 0LL;
                }
                inited = sub_1402DFBC4(Pool2, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u");
                if ( inited < 0 )
                  break;
                if ( (int)sub_14078A470(*(__int64 *)&qword_140D00AC0, Pool2, 0LL, &v19, &v18, &v17, (unsigned int)a3) < 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --*((_WORD *)CurrentThread + 242);
                  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
                  v4 = 1;
                  LOBYTE(v24) = 0;
                  inited = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)Pool2, 131078, &KeyHandle, &v24, 0);
                  if ( inited < 0 )
                    goto LABEL_34;
                  if ( (_BYTE)v24 )
                  {
                    v8 = KeyHandle;
                    inited = sub_14077FAC0(v15, Pool2);
                    if ( inited < 0 || (inited = sub_1402E0340(a3, 0xC8uLL, Pool2, 0LL, 0LL, 2048), inited < 0) )
                    {
                      sub_140A236A4(qword_140D00AC0);
                    }
                    else if ( a2 )
                    {
                      v23 = 1;
                      inited = sub_1406D5A30(v8, L"Phantom", 4u, &v23, 4u);
                    }
LABEL_33:
                    if ( !v4 )
                      break;
LABEL_34:
                    ExReleaseResourceLite(&stru_140C462A0);
                    sub_1402F9540((__int64)KeGetCurrentThread());
                    v8 = KeyHandle;
                    break;
                  }
                  ExReleaseResourceLite(&stru_140C462A0);
                  sub_1402F9540((__int64)KeGetCurrentThread());
                  v8 = KeyHandle;
                  v4 = 0;
                }
                if ( (unsigned int)++v13 > 0x270F )
                {
                  inited = -2147483622;
                  goto LABEL_33;
                }
                v4 = 0;
              }
              if ( v8 )
                ZwClose(v8);
              ExFreePoolWithTag(Pool2, 0x34706E50u);
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
