/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800232F0
 * Callers:
 *     ?QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E3D0 (-QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E3F0 (-QueryInterface@ContextualProcessorBuffer@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E410 (-QueryInterface@ContextualProcessorBuffer@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        ContextualProcessorBuffer *this,
        struct _GUID *a2,
        void **a3)
{
  ContextualProcessorBuffer *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // r9
  ContextualProcessorBuffer *v10; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_09d4eb6f_2e60_439b_b350_48a58a91f245.Data4;
      if ( !v6 )
      {
        (*(void (__fastcall **)(ContextualProcessorBuffer *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
          this,
          a2,
          a3,
          a2);
        v4 = (ContextualProcessorBuffer *)((char *)v4 + 16);
LABEL_9:
        *a3 = v4;
        return 0LL;
      }
      if ( IsEqualGUID(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631) )
      {
        (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)v4 + 8LL))(v4);
        goto LABEL_9;
      }
      if ( IsEqualGUID(v8, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59) )
      {
        (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)v4 + 8LL))(v4);
        v10 = v4;
        v4 = (ContextualProcessorBuffer *)((char *)v4 + 8);
        goto LABEL_18;
      }
      if ( IsEqualGUID(v9, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        (*(void (__fastcall **)(ContextualProcessorBuffer *))(*(_QWORD *)v4 + 8LL))(v4);
        v10 = v4;
        v4 = (ContextualProcessorBuffer *)((char *)v4 + 24);
LABEL_18:
        if ( !v10 )
          v4 = 0LL;
        goto LABEL_9;
      }
      return 2147500034LL;
    }
    else
    {
      (*(void (__fastcall **)(ContextualProcessorBuffer *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      *a3 = (char *)v4 + 8;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
}
