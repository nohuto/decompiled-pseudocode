/*
 * XREFs of sub_1406A1000 @ 0x1406A1000
 * Callers:
 *     <none>
 * Callees:
 *     sub_140229AD4 @ 0x140229AD4 (sub_140229AD4.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1406A1350 @ 0x1406A1350 (sub_1406A1350.c)
 *     sub_1407CDAC0 @ 0x1407CDAC0 (sub_1407CDAC0.c)
 *     sub_1407FCA70 @ 0x1407FCA70 (sub_1407FCA70.c)
 *     sub_140985970 @ 0x140985970 (sub_140985970.c)
 */

int sub_1406A1000()
{
  ULONG_PTR v0; // rax
  __int64 v1; // rbx
  int v2; // r8d
  __int128 **v3; // r11
  int v4; // r10d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r9d
  int *v9; // r14
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  signed __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  signed __int32 v21[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v22; // [rsp+28h] [rbp-70h]
  __int128 *v23; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140C0DDD0 )
  {
    v17 = __rdtsc();
    v18 = 41929663 * ((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4);
    qword_140C0DDD0 = v18;
    if ( !v18 )
      qword_140C0DDD0 = 1LL;
    v19 = __rdtsc();
    qword_140C0DDD8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) >> 4)) ^ 0xC29LL;
    qword_140C0DDE0 = sub_1402F5718() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( sub_1402F5718() >= (unsigned __int64)qword_140C0DDE0 )
  {
    v22 = &xmmword_140D07120;
    v23 = &xmmword_140D06FA0;
    v0 = sub_1402A1770(0LL);
    v1 = v0;
    if ( v0 )
    {
      if ( (int)sub_1402312E0(v0) >= 0 )
      {
        if ( !qword_140C0DDE8 )
          qword_140C0DDE8 = (unsigned int)dword_140C0E960;
        if ( (_DWORD)xmmword_140D06FB0 && (_BYTE)KdDebuggerNotPresent )
        {
          v2 = 0;
          v3 = &v23;
          v4 = 2;
          do
          {
            v5 = 0;
            v6 = *(_QWORD *)*v3;
            v7 = *((_DWORD *)*v3 + 4);
            v8 = v2 + v6 + (unsigned int)*v3;
            if ( v7 )
            {
              v9 = *(int **)*v3;
              do
              {
                v10 = *v9;
                ++v5;
                v11 = *v9++;
                v8 = v5 * ((v10 + *(_DWORD *)((v11 >> 4) + v6)) ^ v8);
              }
              while ( v5 < v7 );
            }
            --v3;
            v2 += 2 * v8;
            --v4;
          }
          while ( v4 );
          if ( v2 != qword_140C0DDE8 && !qword_140C0DDA0 )
          {
            v21[8] = -2071986176;
            qword_140C0DDA0 = (unsigned int)__ROL4__(-2071986176, 233);
            xmmword_140C0DDA8 = 0LL;
            qword_140C0DDB8 = 266LL;
            qword_140C0DDC0 = v6;
          }
        }
        sub_140231240(v1, (__int64)v24);
      }
      sub_1407FCA70(v1);
    }
    if ( qword_140C0DDA0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))DeferredContext.DeferredRoutine != DeferredRoutine )
        KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)DeferredRoutine, &DeferredContext);
      qword_140C0DDC8 = 3885024LL;
      KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    }
    qword_140C0DDE0 = sub_1402F5718() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  while ( 1 )
  {
    v12 = _InterlockedExchange64(&qword_140C24F08, 1LL);
    do
    {
      v13 = sub_140229AD4(v12);
      if ( v13 )
        sub_1406A1350(v13);
      if ( dword_140D05010 )
        sub_140985970(v12);
      v15 = *(_QWORD *)(v12 + 8);
      LOBYTE(v14) = 1;
      sub_1407CDAC0(v12, v14);
      v12 = v15;
    }
    while ( v15 && v15 != 1 );
    if ( qword_140C24F08 == 1 )
    {
      v16 = _InterlockedCompareExchange64(&qword_140C24F08, 0LL, 1LL);
      if ( v16 == 1 )
        break;
    }
  }
  _InterlockedOr(v21, 0);
  if ( qword_140C24F80 )
    LODWORD(v16) = ExfUnblockPushLock(&qword_140C24F80, 0LL);
  return v16;
}
