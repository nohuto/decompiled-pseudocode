/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x1C02D6070
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2461047098__private_IsEnabledDeviceUsage @ 0x1C01409C8 (Feature_2461047098__private_IsEnabledDeviceUsage.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0265684 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026572C (--1SEMOBJ@@QEAA@XZ.c)
 */

void __fastcall CleanupPvtData(struct PFF *a1)
{
  Gre::Base *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 j; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  unsigned int CurrentThreadId; // eax
  __int64 v8; // r8
  __int64 i; // rcx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)Feature_2461047098__private_IsEnabledDeviceUsage() )
  {
    v6 = Gre::Base::Globals(v2);
    SEMOBJ::SEMOBJ((SEMOBJ *)&v10, *((HSEMAPHORE *)v6 + 6));
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v8 = *((_QWORD *)a1 + 18);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 8) & 4) != 0 && *(_DWORD *)(v8 + 12) == CurrentThreadId )
      {
        i = *((_QWORD *)a1 + 18);
        *((_QWORD *)a1 + 18) = *(_QWORD *)(v8 + 16);
LABEL_23:
        Win32FreePool((void *)i);
      }
      else
      {
        for ( i = *(_QWORD *)(v8 + 16); i; i = *(_QWORD *)(i + 16) )
        {
          if ( (*(_DWORD *)(i + 8) & 4) != 0 && *(_DWORD *)(i + 12) == CurrentThreadId )
          {
            *(_QWORD *)(v8 + 16) = *(_QWORD *)(i + 16);
            goto LABEL_23;
          }
          v8 = i;
        }
      }
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v10);
  }
  else
  {
    v3 = (unsigned int)PsGetCurrentThreadId();
    v4 = *((_QWORD *)a1 + 18);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 4) != 0 && *(_DWORD *)(v4 + 12) == v3 )
      {
        j = *((_QWORD *)a1 + 18);
        *((_QWORD *)a1 + 18) = *(_QWORD *)(v4 + 16);
LABEL_6:
        Win32FreePool((void *)j);
      }
      else
      {
        for ( j = *(_QWORD *)(v4 + 16); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 8) & 4) != 0 && *(_DWORD *)(j + 12) == v3 )
          {
            *(_QWORD *)(v4 + 16) = *(_QWORD *)(j + 16);
            goto LABEL_6;
          }
          v4 = j;
        }
      }
    }
  }
}
