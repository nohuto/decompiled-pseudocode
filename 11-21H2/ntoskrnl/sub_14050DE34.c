/*
 * XREFs of sub_14050DE34 @ 0x14050DE34
 * Callers:
 *     sub_14050DDD8 @ 0x14050DDD8 (sub_14050DDD8.c)
 *     sub_140A61B10 @ 0x140A61B10 (sub_140A61B10.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void sub_14050DE34()
{
  __int64 v0; // rbx
  unsigned int LockArray_high; // edi
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = qword_140C4E380;
  if ( qword_140C4E380 )
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    if ( (*(_DWORD *)(qword_140C4E380 + 224) & 1) != 0 || !LockArray_high )
    {
      v2 = sub_140303720(qword_140C4E380);
      v4 = sub_14042A5E0(v2, v3);
      if ( v4 >= 0 )
      {
        if ( dword_140D01740 )
        {
          sub_140354420(v0, 2u, *(unsigned int *)(32LL * LockArray_high + qword_140C4C728 + 24), 1, &v7);
        }
        else
        {
          v5 = sub_140303720(v0);
          sub_14042A5E0(v5, v6);
        }
      }
      else
      {
        *(_DWORD *)(v0 + 256) = v4;
        dword_140C4E844 = 15;
        *(_QWORD *)(v0 + 264) = "minkernel\\hals\\lib\\timers\\common\\timeprof.c";
        *(_DWORD *)(v0 + 252) = 15;
        *(_DWORD *)(v0 + 272) = 502;
      }
    }
  }
}
