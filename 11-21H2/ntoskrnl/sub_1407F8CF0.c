/*
 * XREFs of sub_1407F8CF0 @ 0x1407F8CF0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_140982438 @ 0x140982438 (sub_140982438.c)
 * Callees:
 *     sub_14025B5E0 @ 0x14025B5E0 (sub_14025B5E0.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B5EB8 @ 0x1405B5EB8 (sub_1405B5EB8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 */

__int64 __fastcall sub_1407F8CF0(__int64 a1, void *a2, int a3, void *a4, KPROCESSOR_MODE AccessMode, _QWORD *a6)
{
  char *v9; // rsi
  PVOID v10; // r15
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // rdi
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  signed __int32 v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // r9
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v25; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-A8h]
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v30[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v32; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v33; // [rsp+1D0h] [rbp+D0h]
  _OWORD v34[3]; // [rsp+1E0h] [rbp+E0h] BYREF

  *(_QWORD *)&v27 = a1;
  v28 = a6;
  memset(v30, 0, sizeof(v30));
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, 0xF8uLL);
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 2) != 0 )
  {
    v21 = -1LL;
    if ( a4 )
      v21 = (__int64)a4;
    a4 = (void *)v21;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140D051B8 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (Object = 0LL,
        v11 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL),
        v10 = Object,
        v12 = v11,
        v11 >= 0) )
  {
    if ( a4 )
    {
      v25 = 0LL;
      v22 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v25, 0LL);
      v9 = (char *)v25;
      v12 = v22;
      if ( v22 < 0 )
      {
LABEL_18:
        if ( v9 )
        {
          sub_1402D0930((__int64)v34, 0LL);
          ObfDereferenceObject(v9);
        }
        goto LABEL_20;
      }
      sub_14030D5C0((ULONG_PTR)v25, 0LL, (__int64)v34, v23);
    }
    CurrentThread = KeGetCurrentThread();
    v14 = v27 + 16200;
    if ( (a3 & 1) == 0 || (ULONG_PTR *)v27 == &StartContext )
    {
      --*((_WORD *)CurrentThread + 242);
      sub_14025B5E0((__int64 *)v14, v30, 1);
      v26[0] = 0;
      v26[1] = -1;
      v29[0] = qword_140C532A8;
      v29[1] = qword_140C532B0;
      v31[5] = v29;
      v31[6] = v26;
      v31[2] = v30;
      v31[3] = &v32;
      v15 = dword_140C51DDC;
      LODWORD(v31[7]) = 2;
      v31[0] = v14;
      v31[1] = v10;
      HIDWORD(v31[7]) = a3;
      do
      {
        v16 = v15 + 1;
        v17 = v15;
        if ( (unsigned int)(v15 + 1) < 2 )
          v16 = 2;
        LODWORD(v31[30]) = v16;
        v15 = _InterlockedCompareExchange(&dword_140C51DDC, v16, v15);
      }
      while ( v15 != v17 );
      v27 = 0LL;
      sub_140339C20((char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL), 0, (__int64)&v27);
      v18 = sub_1402EB3DC((__int64)&v27);
      if ( (unsigned int)sub_14026A574((__int64)&v31[14], v18, 8) )
      {
        if ( (a3 & 2) != 0 )
        {
          v31[4] = v9 + 1664;
          v19 = sub_1405B5EB8((__int64)v31);
        }
        else
        {
          v31[4] = 0LL;
          v19 = sub_1407F8FE0(v31);
        }
        v12 = v19;
        sub_140268284((__int64)&v31[14]);
        *v28 = v32;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 384));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 376), *((unsigned __int64 *)&v32 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 360), v33);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 368), *((unsigned __int64 *)&v33 + 1));
      }
      else
      {
        v12 = -1073741670;
      }
      sub_14025B5E0((__int64 *)v14, v30, 0);
      sub_1402F9540((__int64)CurrentThread);
    }
    else
    {
      v12 = -1073741637;
    }
    goto LABEL_18;
  }
LABEL_20:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v12;
}
