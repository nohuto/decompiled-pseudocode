/*
 * XREFs of PsSetLoadImageNotifyRoutineEx @ 0x140832640
 * Callers:
 *     PsSetLoadImageNotifyRoutine @ 0x140832600 (PsSetLoadImageNotifyRoutine.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140832A20 @ 0x140832A20 (sub_140832A20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsSetLoadImageNotifyRoutineEx(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  if ( (a2 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225712LL;
  v3 = (struct _EX_RUNDOWN_REF *)sub_140832A20(a1, a2);
  if ( v3 )
  {
    v4 = 0LL;
    while ( !sub_1403C7678((signed __int64 *)&stru_140CF6240.Ptr + v4, v3, 0LL) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 0x40 )
      {
        ExFreePoolWithTag(v3, 0);
        goto LABEL_14;
      }
    }
    _InterlockedIncrement(&dword_140D3CD4C);
    if ( (dword_140D3CA20 & 1) == 0 )
      _interlockedbittestandset(&dword_140D3CA20, 0);
    v5 = 0;
  }
  else
  {
LABEL_14:
    v5 = -1073741670;
  }
  v7 = v5;
  v8 = a1;
  if ( qword_140C15DF8 )
  {
    UserData.Reserved = 0;
    v12 = 0;
    UserData.Ptr = (ULONGLONG)&v8;
    UserData.Size = 8;
    v10 = &v7;
    v11 = 4;
    EtwWrite(qword_140C15DF8, &stru_140012648, 0LL, 2u, &UserData);
  }
  return v5;
}
