/*
 * XREFs of sub_14094FCD4 @ 0x14094FCD4
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_14074CA14 @ 0x14074CA14 (sub_14074CA14.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 *     sub_14094F804 @ 0x14094F804 (sub_14094F804.c)
 *     sub_14094F96C @ 0x14094F96C (sub_14094F96C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG __fastcall sub_14094FCD4(__int64 a1, int a2)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  LONG result; // eax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 592);
  if ( a2 == 3 )
  {
    if ( v3 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    ExAcquireFastMutex(&stru_140C44960);
    v5 = (_QWORD *)(a1 + 576);
    v6 = *(_QWORD *)(a1 + 576);
    if ( *(_QWORD *)(v6 + 8) != a1 + 576 || (v7 = *(_QWORD **)(a1 + 584), (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(a1 + 584) = a1 + 576;
    *v5 = v5;
    --dword_140C44998;
    KeReleaseGuardedMutex(&stru_140C44960);
  }
  else if ( !v3 )
  {
    sub_14074CA14(*(_QWORD *)(a1 + 32), 4, &v10);
    *(_QWORD *)(a1 + 592) = v10;
  }
  *(_DWORD *)(a1 + 568) = 1;
  result = _InterlockedExchangeAdd(&dword_140C449B0, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v9 = 0;
    if ( (a2 != 2 || *(_QWORD *)(a1 + 592)) && (int)sub_14094F96C((__int64)&v9) >= 0 && v9 )
    {
      sub_140944C08((__int128 *)sub_140014AC0, 2, 0LL, 0LL);
      sub_14094F804();
    }
    else if ( byte_140C449B4 )
    {
      sub_140944C08(&xmmword_140014AB0, 2, 0LL, 0LL);
    }
    return KeReleaseSemaphore(&stru_140C449C0, 0, 1, 0);
  }
  return result;
}
